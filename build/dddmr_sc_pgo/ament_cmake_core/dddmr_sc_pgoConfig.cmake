# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_dddmr_sc_pgo_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED dddmr_sc_pgo_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(dddmr_sc_pgo_FOUND FALSE)
  elseif(NOT dddmr_sc_pgo_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(dddmr_sc_pgo_FOUND FALSE)
  endif()
  return()
endif()
set(_dddmr_sc_pgo_CONFIG_INCLUDED TRUE)

# output package information
if(NOT dddmr_sc_pgo_FIND_QUIETLY)
  message(STATUS "Found dddmr_sc_pgo: 1.0.0 (${dddmr_sc_pgo_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'dddmr_sc_pgo' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${dddmr_sc_pgo_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(dddmr_sc_pgo_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${dddmr_sc_pgo_DIR}/${_extra}")
endforeach()
