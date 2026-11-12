#include <iostream>
using namespace std;
  Reserva::Reserva(int numR, int docH, int idH, string start, string end, 
  bool reservaG):numReserva(numR), docHuesped(docH), idHabitacion(idH), 
  inicioReserva(start), finReserva(end), reservaGrupal(reservaG){}
  int Reserva::NumReserva(){return numReserva; }
  int Reserva::DocHuesped(){return docHuesped; }
  int Reserva::IdHabitacion(){return idHabitacion;}
  string Reserva::InicioReserva(){return inicioReserva; }
  string Reserva::FinReserva(){return finReserva;}
  bool Reserva::ReservaGrupal(){return reservaGrupal;}

