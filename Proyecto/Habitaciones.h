#ifndef POO_HABITACIONES_H
#define POO_HABITACIONES_H
#include <iostream>
#include <string>
using std::cout;
using std:: string;
class Habitaciones{
private:
    string estado;
    int cant_disp;
    double valor;
public:
    Habitaciones(string est, int c_disp, double val);
    string getEstado();
    int getCantDisp(int num);
    double getValor();
    void setDescuento(double descuento);

};
#endif //POO_HABITACIONES_H
