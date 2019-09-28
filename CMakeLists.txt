cmake_minimum_required(VERSION 3.9)
project(oop)

set(CMAKE_CXX_STANDARD 11)

add_executable(oop main.cpp Shape.cpp Shape.h Circle.cpp Circle.h Utils.cpp Utils.h Rectangle.cpp Rectangle.h Figures.cpp Figures.h ShapeComparators.h)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/figures.txt
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)