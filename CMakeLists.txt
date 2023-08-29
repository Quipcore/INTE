cmake_minimum_required(VERSION 3.20)
project(Temperature_run)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
set(EXE_NAME a)
set(SRC_ROOT_DIR src)
set(TEST_DIR Google_tests)


add_executable(${EXE_NAME} ${SOURCE_FILES})

include_directories(${SRC_ROOT_DIR})
add_subdirectory(${SRC_ROOT_DIR})

target_link_libraries(${EXE_NAME} ${SRC_ROOT_DIR})

add_subdirectory(${TEST_DIR})

