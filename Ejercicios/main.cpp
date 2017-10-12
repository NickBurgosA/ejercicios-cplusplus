#include <iostream>
#include "Productos.hpp"
#include "Venta.hpp"
#include "Cliente.hpp"
#include "Lista.hpp"

using namespace std;
int main() {
  Productos* productos = new Productos("Galleta", 0.5);
  Productos* gaseosa = new Productos("Gaseosa", 2.0);

  SLista<Venta*>* listaVenta = new SLista<Venta*>();
  Venta* nuevo = new Venta(new Cliente((char*)"Piero","12345678"));
  nuevo->setDetalle(new DetalleVenta(productos, 10));
  nuevo->setDetalle(new DetalleVenta(productos, 20));
  nuevo->setDetalle(new DetalleVenta(productos, 30));
  Venta* ventaFab = new Venta(new Cliente((char*)"Fabricio","12345678"));
  ventaFab->setDetalle(new DetalleVenta(gaseosa, 15));
  ventaFab->setDetalle(new DetalleVenta(gaseosa, 5));
  ventaFab->setDetalle(new DetalleVenta(gaseosa, 2));
  listaVenta->insertar(nuevo);
  listaVenta->insertar(ventaFab);
  cout<<listaVenta->longitud()<<endl;
  char*  nombre = new char[20];
  cout<<"Ingresa el nombre del Cliente: "<<endl;
  cin>>nombre;

  SLista<DetalleVenta*>* tmp = new SLista<DetalleVenta*>();

  for(int i=0; i<listaVenta->longitud();++i){
    if(listaVenta->recuperar(i)->getCliente()->getNombre() == nombre) {
      tmp = listaVenta->recuperar(i)->getDetalle();
      break;
    }
  }
  for(int i=0; i<tmp->longitud();++i){
    cout<<tmp->recuperar(i)->getProducto()->getNombre()<<endl;
  }
  return 0;
}