
#ifndef POO_HABITACIONES_H
#define POO_HABITACIONES_H
#include <iostream>
#include <string>
using std::cout;
using std:: string;
class Habitaciones{
private:
    string estadoHabitacion estado; //Disponible, ocupada, limpieza o mantenimiento
    int cantidad;//# Habitaciones
    //double valor;
    int capacidad; //Capacidad de personas por habitación
    string tipo; //Tipo de habitación
    string vista; //¿...?
    bool accesibilidad; //¿...?
public:
    Habitaciones(string est, int c_disp, /*double val*/ int cap; string tip;
    string view; bool acces);
    string getEstado();
    int getCantDisp(int num);
    double getValor();
    void setDescuento(double descuento);

};
#endif //POO_HABITACIONES_H
