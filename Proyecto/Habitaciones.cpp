#include <iostream>
#include "Habitaciones.h"
using namespace std;

    Habitaciones:: Habitaciones(EstadoHabitacion est, int id, int cant, int cap, string tip, 
    string view, bool acces):estado(est), idHabitacion(id), cantidad(cant), capacidad(cap), tipo(tip),
    vista(view), accesibilidad(acces){}
    EstadoHabitacion Habitaciones:: getEstado(){return estado;    }
    int Habitaciones::getId(){return idHabitacion; }
    int Habitaciones:: getCantidad(){return cantidad; }
    int Habitaciones:: getCapacidad(){return capacidad; }
    string Habitaciones:: getTipo(){return tipo; }
    string Habitaciones:: getVista(){return vista; }
    bool Habitaciones:: Disponibilidad(){
        if (cantidad<=0 || estado!=Disponible){
            cout<<"No hay habitaciones disponibles"<<'\n';
            return false;
        }
        cout<<"Habitaciones disponibles"<<'\n';
        return true;
    }
     bool Habitaciones::getAccesibilidad(){ return accesibilidad;}
    void Habitaciones::setEstado(EstadoHabitacion nuevoEstado){
        estado=nuevoEstado;
    }
    void Habitaciones::nuevoMantenimiento(){
        estado=Mantenimiento;
    }
/*int main() {
    Habitaciones hab(Disponible, 11, 1, 2, "Individual", "Apocalipsis", true);
    int numHab;
    cout<<"Digite el número del estado de la habitación \n 1.Disponible. \n 2.Ocupada. \n 3.Limpieza. \n 4.Mantenimiento \n";
        cin>>numHab;
        switch(numHab){
            case 1:
            hab.setEstado(Disponible);
            cout<<"Habitación disponible"<<'\n';
            break;
        case 2:
            hab.setEstado(Ocupada);
            cout<<"Habitación ocupada"<<'\n';
            break;
        case 3:
            hab.setEstado(Limpieza);
            cout<<"Habitación en limpieza"<<'\n';
            break;
        case 4:
            hab.setEstado(Mantenimiento);
            cout<<"Habitación en mantenimiento"<<'\n';
            break;
        default:
            cout<<"Opción inválida"<<'\n';
                break;
        }

return 0;
    }*/ //Poner en el main principal
