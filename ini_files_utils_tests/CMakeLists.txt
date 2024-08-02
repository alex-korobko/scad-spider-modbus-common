set(BOOST_INCLUDE_LIBRARIES asio regex filesystem program_options)
set(BOOST_ENABLE_CMAKE ON)
FetchContent_Declare(
  Boost
  URL https://github.com/boostorg/boost/releases/download/boost-1.85.0/boost-1.85.0-cmake.tar.xz
)
FetchContent_MakeAvailable(Boost)

target_sources(
  scad-spider-modbus-common
  PRIVATE
)

