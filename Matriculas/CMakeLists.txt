cmake_minimum_required(VERSION 3.8)
project(Matriculas)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Alumno.cpp Alumno.hpp Curso.cpp Curso.hpp Turno.cpp Turno.hpp Matricula.cpp Matricula.hpp CursoTurno.cpp CursoTurno.hpp)
add_executable(Matriculas ${SOURCE_FILES})