/**
 * @file scan_context.h
 * @brief ScanContext 管理器 - 用于基于点云的全局位置识别
 * 
 * ScanContext 是一种基于点云全局描述子的地点识别方法，通过将 3D 点云投影
 * 到 2D 极坐标网格中，生成一个独特的"指纹"用于检测回环。
 * 
 * 主要原理：
 * 1. 将雷达扫描投影到极坐标网格（ring × sector）
 * 2. 每列存储该方向上点的最大高度/距离
 * 3. 比较两个 ScanContext 的相似度来检测回环
 * 
 * 参考论文：Kim, G. et al. "Scan Context: Egocentric Spatial Descriptor for Place
 * Recognition within 3D Point Cloud Map" (IROS 2018)
 */

#ifndef DDDMR_SCAN_CONTEXT_H
#define DDDMR_SCAN_CONTEXT_H

#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <Eigen/Core>
#include <vector>
#include <string>

namespace dddmr_sc_pgo
{

/**
 * @brief ScanContext 管理器类
 * 
 * 管理 ScanContext 的创建、存储和相似度比较
 */
class ScanContextManager
{
public:
    /**
     * @brief 构造函数
     */
    ScanContextManager();

    /**
     * @brief 设置 ScanContext 参数
     * @param max_radius 最大检测半径（米）
     * @param num_rings 极坐标网格的环数（径向分区数）
     * @param num_sectors 极坐标网格的扇区数（角度分区数）
     * @param max_tree_depth 最大树深度（用于 KD-Tree 搜索）
     */
    void setParam(double max_radius, int num_rings, int num_sectors, int max_tree_depth);

    /**
     * @brief 从点云创建 ScanContext 并保存
     * @param cloud 输入点云（已转换到世界坐标系）
     * @return 创建的 ScanContext 描述子
     */
    Eigen::MatrixXf makeAndSaveScanContext(const pcl::PointCloud<pcl::PointXYZI>::Ptr& cloud);

    /**
     * @brief 获取最后一个关键帧的 ScanContext
     * @return 最后一个 ScanContext
     */
    Eigen::MatrixXf getLastScanContext() const;

    /**
     * @brief 检测回环
     * @return pair<回环候选关键帧ID, 相似度得分>
     */
    std::pair<int, double> detectLoopClosureID();

    /**
     * @brief 获取所有保存的 ScanContext 数量
     * @return 关键帧数量
     */
    size_t size() const;

    /**
     * @brief 重置管理器
     */
    void reset();

    /**
     * @brief 计算两个 ScanContext 的余弦相似度
     * @param sc1 第一个 ScanContext
     * @param sc2 第二个 ScanContext
     * @return 相似度得分 [0, 1]
     */
    static double computeCosineSimilarity(const Eigen::MatrixXf& sc1, const Eigen::MatrixXf& sc2);

    /**
     * @brief 计算两个 ScanContext 的相关系数
     * @param sc1 第一个 ScanContext
     * @param sc2 第二个 ScanContext
     * @return 相关系数 [-1, 1]
     */
    static double computeCorrelation(const Eigen::MatrixXf& sc1, const Eigen::MatrixXf& sc2);

private:
    /**
     * @brief 将点云投影到极坐标网格
     * @param cloud 输入点云
     * @return 极坐标网格矩阵
     */
    Eigen::MatrixXf projectToPolarGrid(const pcl::PointCloud<pcl::PointXYZI>::Ptr& cloud);

    /**
     * @brief 对 ScanContext 进行行循环移位以找到最佳对齐
     * @param sc1 第一个 ScanContext
     * @param sc2 第二个 ScanContext
     * @return 最佳对齐后的相似度
     */
    static double alignAndCompare(const Eigen::MatrixXf& sc1, Eigen::MatrixXf sc2);

    // ScanContext 参数
    double max_radius_;           // 最大检测半径（米）
    int num_rings_;               // 环数（径向分区）
    int num_sectors_;             // 扇区数（角度分区）
    int max_tree_depth_;          // KD-Tree 最大深度

    // 存储所有关键帧的 ScanContext
    std::vector<Eigen::MatrixXf> scan_contexts_;
    
    // 当前关键帧 ID
    int curr_keyframe_id_;
    
    // 回环检测阈值（相关系数）
    double loop_threshold_;
};

}  // namespace dddmr_sc_pgo

#endif  // DDDMR_SCAN_CONTEXT_H
