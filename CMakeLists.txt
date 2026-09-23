cmake_minimum_required(VERSION 3.20)
project(Game_SDL3)

set(CMAKE_C_STANDARD 11)

find_package(SDL3 REQUIRED)

add_executable(Game_SDL3 main.c)
target_link_libraries(Game_SDL3  PRIVATE SDL3::SDL3)
