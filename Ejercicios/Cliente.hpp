//
// Created by nick on 12/10/17.
//

#ifndef EJERCICIOS_CLIENTE_HPP
#define EJERCICIOS_CLIENTE_HPP


class Cliente {
private:
  char* nombre;
  char* dni;

public:
  char* getNombre() {
    return nombre;
  }

  void setNombre(char *nombre) {
    Cliente::nombre = nombre;
  }

  char* getDni() {
    return dni;
  }

  void setDni(char *dni) {
    Cliente::dni = dni;
  }

public:
  Cliente(char *nombre, char *dni) : nombre(nombre), dni(dni) {}
};


#endif //EJERCICIOS_CLIENTE_HPP
