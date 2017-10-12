#include <iostream>
#include "Alumno.hpp"
#include "Lista.hpp"
#include "Matricula.hpp"

using namespace std;
int main() {
  Alumno* alumno = new Alumno("000109611","Nick");
  SLista<Turno*>* turnos = new SLista<Turno*>();
  turnos->insertar(new Turno("10:40", "12:25", "Lunes","G701"));
  Curso* curso = new Curso("Sistemas inteligentes", "1234",turnos);
  SLista<Matricula*>* matriculas = new SLista<Matricula*>();
  Matricula* matricula = new Matricula(alumno);
  cout << "Hello, World!" << endl;
  return 0;
}