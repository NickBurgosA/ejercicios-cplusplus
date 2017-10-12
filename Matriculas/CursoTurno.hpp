//
// Created by nick on 12/10/17.
//

#ifndef MATRICULAS_CURSOTURNO_HPP
#define MATRICULAS_CURSOTURNO_HPP

#include "Curso.hpp"
#include "Turno.hpp"

class CursoTurno {
private:
  Curso* curso;
  Turno* turno;
public:
  CursoTurno(Curso *curso, Turno *turno);

  Curso *getCurso() const;

  void setCurso(Curso *curso);

  Turno *getTurno() const;

  void setTurno(Turno *turno);
};


#endif //MATRICULAS_CURSOTURNO_HPP
