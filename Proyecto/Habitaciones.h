
#ifndef POO_HABITACIONES_H
#define POO_HABITACIONES_H
#include <string>
class Habitaciones{
private:
    std::string estado; //Disponible, ocupada, limpieza o mantenimiento
    int cantidad;//# Habitaciones
    //double valor;
    int capacidad; //Capacidad de personas por habitación
    std::string tipo; //Tipo de habitación
    std::string vista; //¿...?
    bool accesibilidad; //¿...?
public:
    Habitaciones(std::string est, int cant, /*double val*/ int cap, 
    std::string tip, std::string view, bool acces);
    std::string getEstado();

};
#endif //POO_HABITACIONES_H
