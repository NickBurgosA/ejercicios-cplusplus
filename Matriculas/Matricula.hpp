//
// Created by nick on 12/10/17.
//

#ifndef MATRICULAS_MATRICULA_HPP
#define MATRICULAS_MATRICULA_HPP

#include "Alumno.hpp"
#include "CursoTurno.hpp"
#include "Lista.hpp"

class Matricula {
private:
  Alumno* alumno;
  SLista<CursoTurno*>* listaCursos;
public:
  Matricula(Alumno *alumno);

  Alumno *getAlumno() const;

  void setAlumno(Alumno *alumno);

  SLista<CursoTurno *> *getListaCursos() const;

  void setListaCursos(CursoTurno* cursoTurno);
};


#endif //MATRICULAS_MATRICULA_HPP
