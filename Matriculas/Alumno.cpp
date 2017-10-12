//
// Created by nick on 12/10/17.
//

#include "Alumno.hpp"

Alumno::Alumno(char *codigo, char *nombre) : codigo(codigo), nombre(nombre) {}

char *Alumno::getCodigo() const {
  return codigo;
}

void Alumno::setCodigo(char *codigo) {
  Alumno::codigo = codigo;
}

char *Alumno::getNombre() const {
  return nombre;
}

void Alumno::setNombre(char *nombre) {
  Alumno::nombre = nombre;
}
