#include <iostream>
#include "Carrito.h"
#include "Item.h"
#include <string>
using namespace std;

int main(){

    int opcion=0;
    Carrito carritos[5];
    do{
        cout<<"Dame la opción: 1) Crear un carrito 2) Agregar Item 3) Calcular precio final"<<endl;
        cin>>opcion;
        switc(opcion){
            case 1:
                string metodoDePago;
                cout<<"Dame el metodo de pago"<<endl;
                cin>>metodoDePago;
                string comprador;
                cout<<"Dame el comprador"<<endl;
                cin>>comprador;
                int pos;
                cout<<"Dame la pos en el arreglo de carritos"<<endl;
                cin>>pos;
                Carrito c(metodoDePago,comprador);
                carritos[pos]=c;
                break;
            case 2:
                string nombre;
                cout<<"Dame el nombre"<<endl;
                cin>>nombre;
                double precio;
                cout<<"Dame el precio"<<endl;
                cin>>precio;
                bool impuesto;
                cout<<"Incluye impuesto"<<endl;
                cin>>impuesto;                
                int pos;
                cout<<"Dame la pos en el arreglo de carritos"<<endl;
                cin>>pos;
                int posItem;
                cout<<"Dame la pos en el arreglo de items"<<endl;
                cin>>posItem;                
                Item item(precio,nombre,impuesto);
                carritos[pos].agregarItem(item,posItem);
                break;
            case 3:
                int pos;
                cout<<"Dame la pos en el arreglo de carritos"<<endl;
                cin>>pos;
                cout<<"El precio final del carrito es: "<<carritos[pos].calcularPrecioFinal()<<endl;                
                break;

        }

    }while(opcion!=0);
    
    return 0;
}
