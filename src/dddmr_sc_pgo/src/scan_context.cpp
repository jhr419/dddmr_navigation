/**
 * @file scan_context.cpp
 * @brief ScanContext 实现文件
 * 
 * 实现基于点云的全局位置识别，用于回环检测
 */

#include "dddmr_sc_pgo/scan_context.h"
#include <cmath>
#include <algorithm>
#include <iostream>

namespace dddmr_sc_pgo
{

ScanContextManager::ScanContextManager()
    : max_radius_(80.0)
    , num_rings_(20)
    , num_sectors_(60)
    , max_tree_depth_(20)
    , curr_keyframe_id_(0)
    , loop_threshold_(0.4)
{
}

void ScanContextManager::setParam(double max_radius, int num_rings, int num_sectors, int max_tree_depth)
{
    max_radius_ = max_radius;
    num_rings_ = num_rings;
    num_sectors_ = num_sectors;
    max_tree_depth_ = max_tree_depth;
}

Eigen::MatrixXf ScanContextManager::projectToPolarGrid(
    const pcl::PointCloud<pcl::PointXYZI>::Ptr& cloud)
{
    // 初始化极坐标网格矩阵（行=环, 列=扇区）
    // 使用 z 坐标归一化值来区分不同楼层
    // 归一化到 [0, 1]，结合强度信息
    Eigen::MatrixXf polar_matrix = Eigen::MatrixXf::Constant(
        num_rings_, num_sectors_, -std::numeric_limits<float>::max());
    
    // 收集所有点的 z 值用于归一化
    std::vector<double> z_values;
    z_values.reserve(cloud->points.size());
    
    for (const auto& point : cloud->points)
    {
        double dist_xy = std::sqrt(point.x * point.x + point.y * point.y);
        if (dist_xy > max_radius_ || dist_xy < 0.5)
            continue;
        z_values.push_back(point.z);
    }
    
    // 计算 z 归一化范围
    double z_min = -std::numeric_limits<double>::max();
    double z_max = std::numeric_limits<double>::max();
    if (z_values.size() > 10)
    {
        std::sort(z_values.begin(), z_values.end());
        size_t skip = z_values.size() / 10;
        z_min = z_values[skip];
        z_max = z_values[z_values.size() - 1 - skip];
    }
    double z_range = std::max(z_max - z_min, 0.1);
    
    // 计算每个环和扇区的尺寸
    const double ring_width = max_radius_ / num_rings_;
    const double sector_width = 2.0 * M_PI / num_sectors_;
    
    for (const auto& point : cloud->points)
    {
        // 计算水平距离（忽略高度）
        double dist_xy = std::sqrt(point.x * point.x + point.y * point.y);
        
        // 跳过太远的点
        if (dist_xy > max_radius_ || dist_xy < 0.5)
            continue;
        
        // 确定所属的环
        int ring_idx = static_cast<int>(dist_xy / ring_width);
        if (ring_idx >= num_rings_)
            ring_idx = num_rings_ - 1;
        
        // 计算角度（从 x 轴正方向逆时针）
        double angle = std::atan2(point.y, point.x);
        if (angle < 0)
            angle += 2.0 * M_PI;
        
        // 确定所属的扇区
        int sector_idx = static_cast<int>(angle / sector_width);
        if (sector_idx >= num_sectors_)
            sector_idx = num_sectors_ - 1;
        
        // 归一化 z 值到 [0, 1]
        double z_norm = (point.z - z_min) / z_range;
        z_norm = std::max(0.0, std::min(1.0, z_norm));
        
        // 结合强度和高度信息：使用加权组合
        // 强度归一化到类似范围（假设强度在 0-255）
        double intensity_norm = point.intensity / 255.0;
        
        // 特征 = 0.4 * 归一化强度 + 0.6 * 归一化高度
        // 高度权重更高，因为楼层间的 z 差异比强度差异更显著
        double feature = 0.4 * intensity_norm + 0.6 * z_norm;
        
        polar_matrix(ring_idx, sector_idx) = std::max(
            polar_matrix(ring_idx, sector_idx), static_cast<float>(feature));
    }
    
    return polar_matrix;
}

Eigen::MatrixXf ScanContextManager::makeAndSaveScanContext(
    const pcl::PointCloud<pcl::PointXYZI>::Ptr& cloud)
{
    Eigen::MatrixXf sc = projectToPolarGrid(cloud);
    scan_contexts_.push_back(sc);
    curr_keyframe_id_++;
    return sc;
}

Eigen::MatrixXf ScanContextManager::getLastScanContext() const
{
    if (scan_contexts_.empty())
    {
        return Eigen::MatrixXf();
    }
    return scan_contexts_.back();
}

double ScanContextManager::computeCosineSimilarity(
    const Eigen::MatrixXf& sc1, const Eigen::MatrixXf& sc2)
{
    if (sc1.rows() != sc2.rows() || sc1.cols() != sc2.cols())
        return 0.0;
    
    // 将矩阵展平为向量
    Eigen::VectorXf v1 = Eigen::Map<const Eigen::VectorXf>(
        sc1.data(), sc1.rows() * sc1.cols());
    Eigen::VectorXf v2 = Eigen::Map<const Eigen::VectorXf>(
        sc2.data(), sc2.rows() * sc2.cols());
    
    // 计算余弦相似度
    double dot = v1.dot(v2);
    double norm1 = v1.norm();
    double norm2 = v2.norm();
    
    if (norm1 < 1e-10 || norm2 < 1e-10)
        return 0.0;
    
    return dot / (norm1 * norm2);
}

double ScanContextManager::computeCorrelation(
    const Eigen::MatrixXf& sc1, const Eigen::MatrixXf& sc2)
{
    if (sc1.rows() != sc2.rows() || sc1.cols() != sc2.cols())
        return 0.0;
    
    // 将矩阵展平
    Eigen::VectorXf v1 = Eigen::Map<const Eigen::VectorXf>(
        sc1.data(), sc1.rows() * sc1.cols());
    Eigen::VectorXf v2 = Eigen::Map<const Eigen::VectorXf>(
        sc2.data(), sc2.rows() * sc2.cols());
    
    // 去除无效值（负无穷）
    std::vector<double> valid_v1, valid_v2;
    for (int i = 0; i < v1.size(); ++i)
    {
        if (v1(i) > -1e9 && v2(i) > -1e9)
        {
            valid_v1.push_back(v1(i));
            valid_v2.push_back(v2(i));
        }
    }
    
    if (valid_v1.size() < 10)
        return 0.0;
    
    // 计算皮尔逊相关系数
    double mean1 = 0, mean2 = 0;
    for (size_t i = 0; i < valid_v1.size(); ++i)
    {
        mean1 += valid_v1[i];
        mean2 += valid_v2[i];
    }
    mean1 /= valid_v1.size();
    mean2 /= valid_v2.size();
    
    double cov = 0, std1 = 0, std2 = 0;
    for (size_t i = 0; i < valid_v1.size(); ++i)
    {
        double d1 = valid_v1[i] - mean1;
        double d2 = valid_v2[i] - mean2;
        cov += d1 * d2;
        std1 += d1 * d1;
        std2 += d2 * d2;
    }
    
    if (std1 < 1e-10 || std2 < 1e-10)
        return 0.0;
    
    return cov / std::sqrt(std1 * std2);
}

double ScanContextManager::alignAndCompare(const Eigen::MatrixXf& sc1, Eigen::MatrixXf sc2)
{
    // 对 sc2 进行行循环移位（模拟旋转）
    double max_sim = 0.0;
    
    for (int shift = 0; shift < sc2.rows(); ++shift)
    {
        // 循环移位
        Eigen::MatrixXf shifted = sc2;
        for (int i = 0; i < sc2.rows(); ++i)
        {
            int src_row = (i + shift) % sc2.rows();
            shifted.row(i) = sc2.row(src_row);
        }

        double sim = computeCorrelation(sc1, shifted);
        if (sim > max_sim)
        {
            max_sim = sim;
        }

        // 提前终止：如果相似度已经很高
        if (max_sim > 0.95)
            break;
    }

    return max_sim;
}

std::pair<int, double> ScanContextManager::detectLoopClosureID()
{
    // 需要至少有一定数量的关键帧才能检测回环
    const int min_keyframes_for_loop = 50;
    if (static_cast<int>(scan_contexts_.size()) < min_keyframes_for_loop)
    {
        return {-1, 0.0};
    }
    
    int current_id = scan_contexts_.size() - 1;
    Eigen::MatrixXf current_sc = scan_contexts_.back();
    
    // 搜索最近一段时间之外的历史关键帧（避免检测到相邻帧）
    const int temporal_threshold = 30;  // 至少间隔 30 帧才考虑回环
    
    double best_score = 0.0;
    int best_id = -1;
    
    // 遍历历史关键帧
    for (int i = 0; i < current_id - temporal_threshold; ++i)
    {
        // 计算相似度（考虑旋转对齐）
        double score = alignAndCompare(current_sc, scan_contexts_[i]);
        
        if (score > best_score)
        {
            best_score = score;
            best_id = i;
        }
    }
    
    // 如果得分超过阈值，认为检测到回环
    if (best_score > loop_threshold_)
    {
        return {best_id, best_score};
    }
    
    return {-1, 0.0};
}

size_t ScanContextManager::size() const
{
    return scan_contexts_.size();
}

void ScanContextManager::reset()
{
    scan_contexts_.clear();
    curr_keyframe_id_ = 0;
}

}  // namespace dddmr_sc_pgo
