//
// Created by nick on 12/10/17.
//

#ifndef EJERCICIOS_PRODUCTOS_HPP
#define EJERCICIOS_PRODUCTOS_HPP


class Productos {
private:
  char* nombre;
  float precio;
public:
  Productos(char *nombre, float precio);

  char *getNombre() const;

  void setNombre(char *nombre);

  float getPrecio() const;

  void setPrecio(float precio);
};


#endif //EJERCICIOS_PRODUCTOS_HPP
