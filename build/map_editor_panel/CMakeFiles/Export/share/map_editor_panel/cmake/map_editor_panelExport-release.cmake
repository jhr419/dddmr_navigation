#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "map_editor_panel::map_editor_panel" for configuration "Release"
set_property(TARGET map_editor_panel::map_editor_panel APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(map_editor_panel::map_editor_panel PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmap_editor_panel.so"
  IMPORTED_SONAME_RELEASE "libmap_editor_panel.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS map_editor_panel::map_editor_panel )
list(APPEND _IMPORT_CHECK_FILES_FOR_map_editor_panel::map_editor_panel "${_IMPORT_PREFIX}/lib/libmap_editor_panel.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
