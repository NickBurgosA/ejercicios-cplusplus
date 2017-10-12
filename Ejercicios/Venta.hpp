//
// Created by nick on 12/10/17.
//

#ifndef EJERCICIOS_VENTA_HPP
#define EJERCICIOS_VENTA_HPP

#include "Productos.hpp"
#include "Lista.hpp"
#include "Cliente.hpp"

class DetalleVenta {
  Productos* producto;
  int cantidad;
  float subtotal;
public:
  DetalleVenta(Productos *producto, int cantidad);

  Productos *getProducto() const;

  void setProducto(Productos *producto);

  int getCantidad() const;

  void setCantidad(int cantidad);

  float getSubtotal() const;

  void setSubtotal(float subtotal);
};

class Venta {
private:
  Cliente* cliente;
  SLista<DetalleVenta*>* detalle;
  float total;
public:
  Venta(Cliente *cliente);

  Cliente *getCliente() const;

  void setCliente(Cliente *cliente);

  SLista<DetalleVenta *> *getDetalle() const;

  void setDetalle(DetalleVenta* nuevo);

  float getTotal() const;

  void setTotal(float total);
};


#endif //EJERCICIOS_VENTA_HPP
