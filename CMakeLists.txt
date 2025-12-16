cmake_minimum_required(VERSION 3.10)

project(UselessUtility VERSION 2.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(fuck main.cpp data.cpp)

if(MSVC)
    # Windows-specific optimization
    target_compile_options(fuck PRIVATE /O2 /W4)
else()
    # Linux/Mac optimization
    target_compile_options(fuck PRIVATE -O3 -Wall -Wextra)
endif()