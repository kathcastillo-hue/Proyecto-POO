#include "consumo.h"

consumo::consumo(std::string s, double m, std::string f) : servicio(s), monto(m), fecha(f) {}

std::string consumo::getServicio() const {
    return servicio;
}
double consumo::getMonto() const {
    return monto;
}
std::string consumo::getFecha() const {
    return fecha;
}
