cmake_minimum_required(VERSION 3.30)
project(scad-spider-modbus-common-project
    VERSION 1.0
    LANGUAGES CXX
)

include(FetchContent)

add_executable(scad-spider-modbus-common)
add_subdirectory(boost-cmake)
add_subdirectory(test)

target_sources(
  scad-spider-modbus-common
  PRIVATE
    models/block_parameter.hpp
    models/block_signal.hpp
    models/device_block.hpp
    models/device.hpp
    models/line.hpp
    models/message_type.hpp
    models/message.hpp
    models/station.hpp
    ini_file_utils/ini_2_models_factory.hpp
    ini_file_utils/ini_2_models_factory.cpp
)

target_link_libraries(
  scad-spider-modbus-common
  PRIVATE
  Boost::program_options
  Boost::unit_test_framework
)

enable_testing()

add_test( 
  scad-spider-modbus-common-tests
  scad-spider-modbus-common )
