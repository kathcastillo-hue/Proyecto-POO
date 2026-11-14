#include <iostream>
#include "GestionHotel.h"
using namespace std;

  GestionHotel::GestionHotel():numeroHab(0), numeroRes(0){}

  bool GestionHotel:: NuevaHabitacion(Habitaciones hab){
    if(numeroHab>=HabitacionesMax){
      cout<<"Sin habitaciones disponibles"<<'\n';
      return false;
    }
    habitaciones[numeroHab]=hab;
    numeroHab++;
    return true;
  }

  bool GestionHotel::CruceHabitacion(int numHab, string fechaI, string fechaF){
    for(int i=0; i<numeroRes; i++){
      if (reservas[i].IdHabitacion()==numHab && reservas[i].EstadoR()==Confirmada){
        if(fechaI<reservas[i].FinReserva() && reservas[i].InicioReserva()<fechaF){
        return true;
        }
      }
    }
      return false; 
  }

  bool GestionHotel::NuevaReserva(Reserva Nreserva){
    if(numeroRes>=ReservasMax){
      cout<<"Sin espacio"<<'\n';
      return false;
    }    
    if(!(Nreserva.InicioReserva()<Nreserva.FinReserva())){
      cout<<"Fecha invalida"<<'\n';
      return false;
    }
    for (int i=0; i<numeroHab; i++){
      if (habitaciones[i].getId()==Nreserva.IdHabitacion()){
        if (habitaciones[i].getEstado()==Mantenimiento){
          cout<<"Habitacion en mantenimiento"<<'\n';
          return false;
        }
        if (CruceHabitacion (Nreserva.IdHabitacion(), Nreserva.InicioReserva(), Nreserva.FinReserva())){
          cout<<"Ya esta reservada"<<'\n';
          return false;
        }
    reservas[numeroRes]=Nreserva;
    numeroRes++;
    return true;
    }
  }
  cout<<"Habitacion inexistente"<<'\n';
  return false;
  }

  void GestionHotel::consultarDisponibilidad(string tipo, string conDispInicio, 
  string conDispFin){
    for(int i=0; i<numeroHab; i++){
       if (habitaciones[i].getTipo()==tipo && habitaciones[i].getEstado()!=
         Mantenimiento && !CruceHabitacion(habitaciones[i].getId(), conDispInicio,
         conDispFin)){
        cout<<"La habitacion "<<habitaciones[i].getId()<<" esta disponible"<<'\n';
      }
    }
  }

 bool GestionHotel::cancelarReserva(int numReserva){
   for (int i=0; i<numeroRes; i++){
     if (reservas[i].NumReserva()==numReserva){
       reservas[i].cancelarReserva();
       return true;
     }
  }
  return false;
 }
