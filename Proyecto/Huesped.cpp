
#include<iostream>
#include "Huesped.h"
using namespace std;


  Huesped::Huesped(claseDeCliente c, int id, std::string name, int punto): claseDeCliente(c),
  identificacion(id), nombre(name), puntos(punto){}
  claseDeCliente Huesped::getClaseDeCliente(){ return cliente;}
  int Huesped:: getIdentificacion(){return identificacion;}
  void Huesped:: añadirPuntos(int puntos){
    this->puntos=puntos;
  }
  void Huesped:: quitarPuntos(int puntos){
        this->puntos=puntos;
  }
