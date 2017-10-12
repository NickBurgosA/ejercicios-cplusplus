cmake_minimum_required(VERSION 3.8)
project(Ejercicios)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Cliente.hpp Productos.cpp Productos.hpp Venta.cpp Venta.hpp)
add_executable(Ejercicios ${SOURCE_FILES})