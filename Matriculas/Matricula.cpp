//
// Created by nick on 12/10/17.
//

#include "Matricula.hpp"

Matricula::Matricula(Alumno *alumno) : alumno(alumno){
  Matricula::listaCursos = new SLista<CursoTurno*>();
}

Alumno *Matricula::getAlumno() const {
  return alumno;
}

void Matricula::setAlumno(Alumno *alumno) {
  Matricula::alumno = alumno;
}

SLista<CursoTurno *> *Matricula::getListaCursos() const {
  return listaCursos;
}

void Matricula::setListaCursos(CursoTurno* nuevo) {
  Matricula::listaCursos->insertar(nuevo);
}
