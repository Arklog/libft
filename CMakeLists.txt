project(ft)
cmake_minimum_required(VERSION 3.00)

file(GLOB SRC src/**.c src/*.c)
include_directories(./)

add_library(ft ${SRC})