#include "Item.h"

Item::Item(){
    precio=0.0;
    nombre="Sin nombre";
    impuesto=false;
}
Item::Item(double precio, string nombre,bool impuesto){
    this->precio=precio;
    this->nombre=nombre;
    this->impuesto=impuesto;
}
void Item::setPrecio(double precio){
    this->precio=precio;
}
double Item::getPrecio(){
    return precio;
}
void Item::setNombre(string nombre){
    this->nombre=nombre;
}
string Item::getNombre(){
    return nombre;
}
bool Item::getImpuesto(){
    return impuesto;
}
void Item::setImpuesto(bool impuesto){
    this->impuesto=impuesto;
}
