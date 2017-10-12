//
// Created by nick on 12/10/17.
//

#ifndef MATRICULAS_TURNO_HPP
#define MATRICULAS_TURNO_HPP

class Turno {
private:
  char* horaInicio;
  char* horaFin;
  char* dia;
  char* salon;
public:
  Turno(char *horaInicio, char *horaFin, char *dia, char *salon);

  char *getHoraInicio() const;

  void setHoraInicio(char *horaInicio);

  char *getHoraFin() const;

  void setHoraFin(char *horaFin);

  char *getDia() const;

  void setDia(char *dia);

  char *getSalon() const;

  void setSalon(char *salon);
};


#endif //MATRICULAS_TURNO_HPP
