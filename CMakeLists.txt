cmake_minimum_required(VERSION 3.22)

project(square CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

add_executable(square 
    src/main.cpp
    src/square.cpp
)

target_include_directories(square PRIVATE include)

if (BUILD_TESTS)
    add_subdirectory(external/Catch2)
    target_link_libraries(square PRIVATE Catch2::Catch2WithMain)
    target_compile_definitions(square PRIVATE BUILD_TESTS=${BUILD_TESTS})
endif ()