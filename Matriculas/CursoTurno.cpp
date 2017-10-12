//
// Created by nick on 12/10/17.
//

#include "CursoTurno.hpp"

CursoTurno::CursoTurno(Curso *curso, Turno *turno) : curso(curso), turno(turno) {}

Curso *CursoTurno::getCurso() const {
  return curso;
}

void CursoTurno::setCurso(Curso *curso) {
  CursoTurno::curso = curso;
}

Turno *CursoTurno::getTurno() const {
  return turno;
}

void CursoTurno::setTurno(Turno *turno) {
  CursoTurno::turno = turno;
}
