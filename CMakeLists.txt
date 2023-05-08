project(libft)
cmake_minimum_required(VERSION 3.00)

set(CMAKE_C_STANDARD 99)
file(GLOB SRC src/**/*.c src/*.c)

include_directories(./)

add_library(ft ${SRC})

add_custom_target(depend)
add_dependencies(ft)

add_executable(test test.c)
target_link_libraries(test ft)
add_dependencies(test ft)