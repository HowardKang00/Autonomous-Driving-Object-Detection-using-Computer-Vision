#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "my_package::my_package__rosidl_generator_py" for configuration ""
set_property(TARGET my_package::my_package__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(my_package::my_package__rosidl_generator_py PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "my_package::my_package__rosidl_generator_c;my_package::my_package__rosidl_typesupport_c;std_msgs::std_msgs__rosidl_generator_py;builtin_interfaces::builtin_interfaces__rosidl_generator_py"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmy_package__rosidl_generator_py.dylib"
  IMPORTED_SONAME_NOCONFIG "@rpath/libmy_package__rosidl_generator_py.dylib"
  )

list(APPEND _cmake_import_check_targets my_package::my_package__rosidl_generator_py )
list(APPEND _cmake_import_check_files_for_my_package::my_package__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libmy_package__rosidl_generator_py.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
