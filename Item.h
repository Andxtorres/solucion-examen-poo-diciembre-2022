#ifndef ITEM_H
#define ITEM_H
#include <string>
using namespace std;
class Item{
    private:
        double precio;
        string nombre;
        bool impuesto;
    public:
        Item();
        Item(double precio, string nombre,bool impuesto);
        void setPrecio(double precio);
        double getPrecio();
        void setNombre(string nombre);
        string getNombre();
        bool getImpuesto();
        void setImpuesto(bool impuesto);
};

#endif
