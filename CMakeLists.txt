cmake_minimum_required(VERSION 3.0)
project(googletest_travis_ci)

set(CMAKE_CXX_STANDARD 11)

set( CMAKE_CXX_FLAGS "-fprofile-arcs -ftest-coverage" )

add_executable(googletest_travis_ci main.cpp algo.cpp algo.h)

enable_testing()
find_package(GTest REQUIRED)
find_package(Threads REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(tests tests/google_test.cpp algo.cpp algo.h)
target_link_libraries(tests ${GTEST_BOTH_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
add_test(AllTestsInFoo tests)
