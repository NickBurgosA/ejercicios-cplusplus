//
// Created by nick on 12/10/17.
//

#ifndef MATRICULAS_CURSO_HPP
#define MATRICULAS_CURSO_HPP

#include "Turno.hpp"
#include "Lista.hpp"

class Curso {
private:
  char* nombre;
  char* nrc;
  SLista<Turno*>* turnos;

public:
  Curso(char *nombre, char *nrc, SLista<Turno *> *turnos);

  char *getNombre() const;

  void setNombre(char *nombre);

  char *getNrc() const;

  void setNrc(char *nrc);

  SLista<Turno *> *getTurnos() const;

  void setTurnos(SLista<Turno *> *turnos);
};


#endif //MATRICULAS_CURSO_HPP
