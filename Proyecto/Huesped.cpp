
#include<iostream>
#include "Huesped.h"
using namespace std;

  Huesped::Huesped(claseDeCliente c, int id, std::string name, int punto): cliente(c),
  identificacion(id), nombre(name), puntos(punto){}
  claseDeCliente Huesped::getClaseDeCliente(){ return cliente;}
  int Huesped:: getIdentificacion(){return identificacion;}
  string Huesped::getNombre(){return nombre;}
  int Huesped::getPuntos(){return puntos;}
  void Huesped:: añadirPuntos(int puntos){
    if(puntos>0){
      this->puntos+=puntos;
    } else{
      cout<<"Cantidad invalida"<<'\n';
    }
  }
  void Huesped:: quitarPuntos(int puntos){
    if (puntos>0 && puntos<=this->puntos){
        this->puntos-=puntos;
    }else{
      cout<<"Cantidad invalida"<<'\n';
    }
  }
