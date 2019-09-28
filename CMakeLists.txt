cmake_minimum_required(VERSION 3.9)
project(oop)

set(CMAKE_CXX_STANDARD 11)

add_executable(oop src/main.cpp src/Shape.cpp src/Shape.h src/Circle.cpp src/Circle.h src/Utils.cpp src/Utils.h src/Rectangle.cpp src/Rectangle.h src/Figures.cpp src/Figures.h src/ShapeComparators.h)
configure_file(src/figures.txt
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)