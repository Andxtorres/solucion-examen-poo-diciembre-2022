#ifndef CARRITO_H
#define CARRITO_H
#include <string>
#include "Item.h"
using namespace std;

class Carrito{
    private:
        string metodoDePago;
        string nombreComprador;
        Item items[10];
    
    public:
        Carrito();
        Carrito(string metodoDePago,string nombreComprador);
        void setMetodoDePago(string metodoDePago);
        string getMetodoDePago();
        void setNombreComprador(string nombreComprador);
        string getNombreComprador();
        void agregarItem(Item item, int index);
        double calcularPrecioFinal();

};

#endif
