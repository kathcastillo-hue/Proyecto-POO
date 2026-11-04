
#ifndef POO_HABITACIONES_H
#define POO_HABITACIONES_H
#include <string>
class Habitaciones{
private:
    std::string estado; //Disponible, ocupada, limpieza o mantenimiento
    int idHabitacion;
    int cantidad;//# Habitaciones
    int capacidad; //Capacidad de personas por habitación
    std::string tipo; //Tipo de habitación
    std::string vista; //Vista de la habitación (mar, ciudad, selva)
    bool accesibilidad; //¿Apta para personas con movilidad reducida?
public:
    Habitaciones(std::string est, int id, int cant, int cap, std::string tip, 
    std::string view, bool acces);
    std::string getEstado();
    int getId();
    int getCantidad();
    int getCapacidad();
    std::string getTipo();
    std::string getVista();
    bool Disponibilidad();

};
#endif //POO_HABITACIONES_H
