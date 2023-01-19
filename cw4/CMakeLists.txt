cmake_minimum_required(VERSION 3.23)
project(Drawing)

set(CMAKE_CXX_STANDARD 20)

add_executable(Drawing main.cpp Graphic.h Line.h Rectangle.h Picture.h)

ENABLE_TESTING()
ADD_SUBDIRECTORY(tests)
