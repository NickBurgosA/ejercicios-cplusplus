//
// Created by nick on 12/10/17.
//

#include "Productos.hpp"

Productos::Productos(char *nombre, float precio) : nombre(nombre), precio(precio) {}

char *Productos::getNombre() const {
  return nombre;
}

void Productos::setNombre(char *nombre) {
  Productos::nombre = nombre;
}

float Productos::getPrecio() const {
  return precio;
}

void Productos::setPrecio(float precio) {
  Productos::precio = precio;
}
