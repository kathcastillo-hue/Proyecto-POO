#include <iostream>
#include "Reserva.h"
using namespace std;
  Reserva::Reserva(tipoDeGarantia tipG, estadoDeReserva estR, int numR, int docH, int idH, string start, string end, 
  bool reservaG):tipoG(tipG), estadoR(estR), numReserva(numR), docHuesped(docH), idHabitacion(idH), 
  inicioReserva(start), finReserva(end), reservaGrupal(reservaG){}
  tipoDeGarantia Reserva:: TipoDeGarantia(){return tipoG;}
  estadoDeReserva Reserva:: EstadoR(){return estadoR;}
  int Reserva::NumReserva(){return numReserva; }
  int Reserva::DocHuesped(){return docHuesped; }
  int Reserva::IdHabitacion(){return idHabitacion;}
  string Reserva::InicioReserva(){return inicioReserva; }
  string Reserva::FinReserva(){return finReserva;}
  bool Reserva::ReservaGrupal(){return reservaGrupal;}

