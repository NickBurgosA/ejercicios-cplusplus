//
// Created by nick on 30/09/17.
//

#ifndef __LISTA_HPP__
#define __LISTA_HPP__

#include <cstddef>

template  <typename T>
struct SNodo {
  SNodo<T>* s;
  T e;
  SNodo(T e) {
    s = nullptr;
    this->e = e;
  }
};
using namespace std;
template <typename T>
struct SLista {
  SNodo<T>* inicio;
  long nElementos;
  SLista() {
    inicio = nullptr;
    nElementos = 0;
  }
  void anteponer(T e) {
    SNodo<T>* nuevo = new SNodo<T>(e);
    if(inicio != nullptr) {
      nuevo->s = inicio;
    }
    inicio = nuevo;
    ++nElementos;
  }
  void insertar(T e) {
    SNodo<T>* aux = inicio;
    if(inicio != nullptr) {
      while(aux->s != nullptr ){
        aux = aux->s;
      }
      aux->s = new SNodo<T>(e);
    }else {
      inicio = new SNodo<T>(e);
    }
    ++nElementos;
  }
  long longitud() {
    return nElementos;
  }
  T recuperar(int pos) {
    if(inicio != nullptr) {
      SNodo<T>* aux = inicio;
      if(pos>=0 && pos< nElementos) {
        int c = 0;
        while(c < pos){
          aux = aux->s;
          c++;
        }
      }
      return aux->e;
    }
  }
  void eliminar(int pos) {
    if(inicio != nullptr) {
      SNodo<T>* aux = inicio;
      if(pos>=0 && pos< nElementos) {
        int c = 0;
        while(c < pos-1){
          aux = aux->s;
          c++;
        }
        SNodo<T>* tmp = aux->s;
        aux->s = aux->s->s;
        delete(tmp);
      }
    }
  }
  SLista<T>* buscarPorValor(T e) {
    if(inicio != nullptr) {
      SLista<T>* lista = new SLista<T>();
      SNodo<T>* aux = inicio;
        int c = 0;
        while(aux->s != nullptr){
          if(aux->e == e) {
            lista->insertar(aux->e);
          }
          aux = aux->s;
        }
      return lista;
    }
  }
  /*void ordenarDescendente() {
    if(inicio != nullptr) {
      SNodo<T>* tmp = inicio;
      while(tmp->s != nullptr){
        if (tmp->s->e > tmp->e){
          c<<tmp->e<<std::endl;
          SNodo<T>* aux = tmp;
          tmp = tmp->s;
          tmp->s = aux;
        } else {
          tmp = tmp->s;
        }
      }
    }
  }*/
};
#endif //TEMPLATES_LISTA_HPP