cmake_minimum_required(VERSION 3.30)
project(scad-spider-modbus-common-project)


# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  #URL to the latest GoogleTest release by commit hash
  URL https://github.com/google/googletest/archive/e39786088138f2749d64e9e90e0f9902daa77c40.zip 
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(scad-spider-modbus-common)

add_subdirectory(models)
add_subdirectory(models_test)

target_link_libraries(
  scad-spider-modbus-common
  GTest::gtest_main
)



include(GoogleTest)
gtest_discover_tests(scad-spider-modbus-common)
