cmake_minimum_required(VERSION 3.16)
project(fortnite-optimizer CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(fortniteoptimizer
    src/main.cpp
    src/tuner.cpp
    src/lagfix.cpp
    src/profiles.cpp
    src/cli.cpp
)

target_include_directories(fortniteoptimizer PRIVATE include)

if(WIN32)
    target_link_libraries(fortniteoptimizer PRIVATE userenv)
endif()
