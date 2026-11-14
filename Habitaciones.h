#ifndef POO_HABITACIONES_H
#define POO_HABITACIONES_H
#include <string>

enum EstadoHabitacion{
    Disponible,
    Ocupada,
    Limpieza,
    Mantenimiento,
};

class Habitaciones{
private:
    EstadoHabitacion estado;
    int idHabitacion;
    int cantidad;//# Habitaciones
    int capacidad; //Capacidad de personas por habitación
    std::string tipo; //Tipo de habitación
    std::string vista; //Vista de la habitación (mar, ciudad, selva)
    bool accesibilidad; //¿Apta para personas con movilidad reducida?
public:
    Habitaciones();
    Habitaciones(EstadoHabitacion est, int id, int cant, int cap, std::string tip, 
    std::string view, bool acces);
    EstadoHabitacion getEstado();
    int getId();
    int getCantidad();
    int getCapacidad();
    std::string getTipo();
    std::string getVista();
    bool Disponibilidad();
    bool getAccesibilidad();
    void setEstado(EstadoHabitacion nuevoEstado);
    void nuevoMantenimiento();
    
};
#endif //POO_HABITACIONES_H
