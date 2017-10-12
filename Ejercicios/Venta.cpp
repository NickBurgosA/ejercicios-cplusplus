//
// Created by nick on 12/10/17.
//

#include "Venta.hpp"

Venta::Venta(Cliente *cliente) : cliente(cliente) {
  Venta::detalle = new SLista<DetalleVenta*>();
}

Cliente *Venta::getCliente() const {
  return cliente;
}

void Venta::setCliente(Cliente *cliente) {
  Venta::cliente = cliente;
}

SLista<DetalleVenta *> *Venta::getDetalle() const {
  return detalle;
}

void Venta::setDetalle(DetalleVenta* nuevo) {
  Venta::detalle->insertar(nuevo);
}

float Venta::getTotal() const {
  return total;
}

void Venta::setTotal(float total) {
  Venta::total = total;
}

DetalleVenta::DetalleVenta(Productos *producto, int cantidad) : producto(producto), cantidad(cantidad){
  DetalleVenta::subtotal = DetalleVenta::producto->getPrecio() * DetalleVenta::cantidad;
}

Productos *DetalleVenta::getProducto() const {
  return producto;
}

void DetalleVenta::setProducto(Productos *producto) {
  DetalleVenta::producto = producto;
}

int DetalleVenta::getCantidad() const {
  return cantidad;
}

void DetalleVenta::setCantidad(int cantidad) {
  DetalleVenta::cantidad = cantidad;
}

float DetalleVenta::getSubtotal() const {
  return subtotal;
}

void DetalleVenta::setSubtotal(float subtotal) {
  DetalleVenta::subtotal = subtotal;
}
