#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "dddmr_rviz_default_plugins::dddmr_rviz_default_plugins" for configuration "Release"
set_property(TARGET dddmr_rviz_default_plugins::dddmr_rviz_default_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(dddmr_rviz_default_plugins::dddmr_rviz_default_plugins PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libdddmr_rviz_default_plugins.so"
  IMPORTED_SONAME_RELEASE "libdddmr_rviz_default_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS dddmr_rviz_default_plugins::dddmr_rviz_default_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_dddmr_rviz_default_plugins::dddmr_rviz_default_plugins "${_IMPORT_PREFIX}/lib/libdddmr_rviz_default_plugins.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
