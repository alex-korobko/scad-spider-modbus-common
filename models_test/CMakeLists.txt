cmake_minimum_required(VERSION 3.30)
project(my_project)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/e39786088138f2749d64e9e90e0f9902daa77c40.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  spider_common_test
  line_test.cpp
  message_test.cpp
  message_type_test.cpp
  station_test.cpp
)
target_link_libraries(
  spider_common_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(spider_common_test)