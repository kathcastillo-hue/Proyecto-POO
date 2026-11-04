
#include <iostream>
#include "Habitaciones.h"
using namespace std;

    Habitaciones:: Habitaciones(string est, int id; int cant, int cap, string tip, 
    string view, bool acces):estado(est), idHabitacion(id), cantidad(cant), capacidad(cap), tipo(tip),
    vista(view), accesibilidad(acces){}
    string Habitaciones:: getEstado(){return estado;}
    bool Disponibilidad(){
        if (cantidad<0){
            cout<<"No hay habitaciones disponible";
            return false;
        }
        return true;
    }

int main() {


return 0;
    }
