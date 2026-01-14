cmake_minimum_required(VERSION 3.16)
project(GameC C)

set(CMAKE_C_STANDARD 99)

find_package(raylib REQUIRED)

add_executable(GameC main.c
        src/world.c
        src/world.h
        src/Camera.c
        src/Camera.h
        src/block.c
        src/block.h)
target_link_libraries(GameC raylib)
