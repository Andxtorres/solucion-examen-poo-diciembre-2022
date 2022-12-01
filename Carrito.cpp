#include "Carrito.h"

Carrito::Carrito(){
    metodoDePago="Sin método";
    nombreComprador="Sin comprador";
}
Carrito::Carrito(string metodoDePago,string nombreComprador){
    this->metodoDePago=metodoDePago;
    this->nombreComprador=nombreComprador;
}
void Carrito::setMetodoDePago(string metodoDePago){
    this->metodoDePago=metodoDePago;
}
string Carrito::getMetodoDePago(){
    return metodoDePago;
}
void Carrito::setNombreComprador(string nombreComprador){
    this->nombreComprador=nombreComprador;
}
string Carrito::getNombreComprador(){
    return nombreComprador;
}
void Carrito::agregarItem(Item item, int index){
    items[index]=item;
}
double Carrito::calcularPrecioFinal(){
    double resultado=0.0;
    for(int i=0;i<10;i++){
        if(items[i].getNombre()!="Sin nombre"){
            if(items[i].getImpuesto()==true){
               resultado=resultado+items[i].getPrecio()*1.16; 
            }else{
                resultado=resultado+items[i].getPrecio(); 
            }
        }
    }
    return resultado;
}

