cmake_minimum_required(VERSION 3.30)
project(scad-spider-modbus-common-project
    VERSION 1.0
    LANGUAGES CXX
)

enable_testing()
include(FetchContent)

add_executable(scad-spider-modbus-common)
add_subdirectory(boost-cmake)
add_subdirectory(models)
add_subdirectory(ini_file_utils)
add_subdirectory(test)

target_link_libraries(
  scad-spider-modbus-common
  PRIVATE
  Boost::program_options
  Boost::unit_test_framework
)
