project(ft)
cmake_minimum_required(VERSION 3.00)

file(GLOB SRC src/**/*.c src/*.c)
include_directories(./)

add_library(ft ${SRC})
target_compile_options(ft PRIVATE -g -Wall -Wextra -Werror)

add_executable(test test.c)
add_dependencies(test ft)
target_link_libraries(test ft)