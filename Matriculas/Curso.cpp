//
// Created by nick on 12/10/17.
//

#include "Curso.hpp"

Curso::Curso(char *nombre, char *nrc, SLista<Turno *> *turnos) : nombre(nombre), nrc(nrc), turnos(turnos) {}

char *Curso::getNombre() const {
  return nombre;
}

void Curso::setNombre(char *nombre) {
  Curso::nombre = nombre;
}

char *Curso::getNrc() const {
  return nrc;
}

void Curso::setNrc(char *nrc) {
  Curso::nrc = nrc;
}

SLista<Turno *> *Curso::getTurnos() const {
  return turnos;
}

void Curso::setTurnos(SLista<Turno *> *turnos) {
  Curso::turnos = turnos;
}
