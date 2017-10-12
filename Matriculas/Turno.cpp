//
// Created by nick on 12/10/17.
//

#include "Turno.hpp"

Turno::Turno(char *horaInicio, char *horaFin, char *dia, char *salon) : horaInicio(horaInicio), horaFin(horaFin),
                                                                        dia(dia), salon(salon) {}

char *Turno::getHoraInicio() const {
  return horaInicio;
}

void Turno::setHoraInicio(char *horaInicio) {
  Turno::horaInicio = horaInicio;
}

char *Turno::getHoraFin() const {
  return horaFin;
}

void Turno::setHoraFin(char *horaFin) {
  Turno::horaFin = horaFin;
}

char *Turno::getDia() const {
  return dia;
}

void Turno::setDia(char *dia) {
  Turno::dia = dia;
}

char *Turno::getSalon() const {
  return salon;
}

void Turno::setSalon(char *salon) {
  Turno::salon = salon;
}
