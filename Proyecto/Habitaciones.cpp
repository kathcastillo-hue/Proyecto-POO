#include <iostream>
#include "Habitaciones.h"
using namespace std;

    Habitaciones:: Habitaciones(string est, int id, int cant, int cap, string tip, 
    string view, bool acces):estado(est), idHabitacion(id), cantidad(cant), capacidad(cap), tipo(tip),
    vista(view), accesibilidad(acces){}
    string Habitaciones:: getEstado(){return estado; }
    int Habitaciones::getId(){return idHabitacion; }
    int Habitaciones:: getCantidad(){return cantidad; }
    int Habitaciones:: getCapacidad(){return capacidad; }
    string Habitaciones:: getTipo(){return tipo; }
    string Habitaciones:: getVista(){return vista; }
    bool Habitaciones:: Disponibilidad(){
        if (cantidad<=0 || estado!="Disponible"){
            cout<<"No hay habitaciones disponibles"<<'\n';
            return false;
        }
        cout<<"Habitaciones disponibles"<<'\n';
        return true;
    }
     bool Habitaciones::getAccesibilidad(){ return accesibilidad;}
    void Habitaciones::setEstado(string nuevoEstado){
        estado=nuevoEstado;
        cout<<nuevoEstado<<'\n';
    }
    void Habitaciones::nuevoMantenimiento(){
        estado="En mantenimiento";
    }
int main() {


return 0;
    }
