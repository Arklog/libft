project(libft)
cmake_minimum_required(VERSION 3.00)

set(CMAKE_C_STANDARD 99)
file(GLOB SRC src/*.c)

include_directories(.)

add_library(ft ${SRC})