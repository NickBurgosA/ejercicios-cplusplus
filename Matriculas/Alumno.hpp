//
// Created by nick on 12/10/17.
//

#ifndef MATRICULAS_ALUMNO_HPP
#define MATRICULAS_ALUMNO_HPP


class Alumno {
private:
  char* codigo;
  char* nombre;

public:
  Alumno(char *codigo, char *nombre);

  char *getCodigo() const;

  void setCodigo(char *codigo);

  char *getNombre() const;

  void setNombre(char *nombre);
};


#endif //MATRICULAS_ALUMNO_HPP
