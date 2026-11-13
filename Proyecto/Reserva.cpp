#include <iostream>
#include "Reserva.h"
using namespace std;

  Reserva::Reserva(tipoDeGarantia tipG, estadoDeReserva estR, int numR, int docH, 
  int idH, string start, string end, bool reservaG):tipoG(tipG), estadoR(estR), 
  numReserva(numR), docHuesped(docH), idHabitacion(idH), inicioReserva(start), 
  finReserva(end), reservaGrupal(reservaG){}
  tipoDeGarantia Reserva:: TipoDeGarantia(){return tipoG;}
  estadoDeReserva Reserva:: EstadoR(){return estadoR;}
  int Reserva::NumReserva(){return numReserva; }
  int Reserva::DocHuesped(){return docHuesped; }
  int Reserva::IdHabitacion(){return idHabitacion;}
  string Reserva::InicioReserva(){return inicioReserva; }
  string Reserva::FinReserva(){return finReserva;}
  void Reserva:: cambiarFechas(string start, string end, string hoy){
    if (estadoR==Confirmada && start<end && start>hoy){
      this->inicioReserva=start;
      this->finReserva=end;
    }
  }
  void Reserva::cancelarReserva(){
    if (estadoR==Confirmada){
      estadoR=Cancelada;
    }
  }
  void Reserva::aplicarNoShow(){
    if(estadoR==Confirmada){
      estadoR=NoShow;
    }
  }
  void Reserva::quitarNoShow(bool causaJust){
    if(estadoR==NoShow && causaJust){
      estadoR=Confirmada;
    }
  }
  bool Reserva::ReservaGrupal(){return reservaGrupal;}

  /*int main(){
  Reserva reserva(Tarjeta, Confirmada, 1, 100, 12, "2026-11-10", "2026-11-15", true);
  reserva.cambiarFechas("2026-11-07", "2026-11-15","2026-11-10");
   return 0; 
  }*/

