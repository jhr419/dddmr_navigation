#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mapping_panel::mapping_panel" for configuration "Release"
set_property(TARGET mapping_panel::mapping_panel APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mapping_panel::mapping_panel PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmapping_panel.so"
  IMPORTED_SONAME_RELEASE "libmapping_panel.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS mapping_panel::mapping_panel )
list(APPEND _IMPORT_CHECK_FILES_FOR_mapping_panel::mapping_panel "${_IMPORT_PREFIX}/lib/libmapping_panel.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
