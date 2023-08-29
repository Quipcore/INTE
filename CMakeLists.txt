cmake_minimum_required(VERSION 3.20)
project(testing_test)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_executable(Temperature_run ${SOURCE_FILES})

include_directories(src)
add_subdirectory(src)

target_link_libraries(Temperature_run src)

add_subdirectory(Google_tests)

