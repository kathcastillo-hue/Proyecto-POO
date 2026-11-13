#ifndef POO_GESTIONHOTEL_H
#define POO_GESTIONHOTEL_H
#include <string>
#include "Habitaciones.h"
#include "Reserva.h"

class GestionHotel{
  static const int HabitacionesMax=10;
  static const int ReservasMax=5;
  Habitaciones habitaciones[HabitacionesMax];
  Reserva reservas[ReservasMax];
  int numeroHab;
  int numeroRes;
public:
  GestionHotel();
  bool NuevaHabitacion(Habitaciones hab);
  bool CruceHabitacion(int idHab, std::string fechaI, std::string fechaF);
  bool NuevaReserva(Reserva Nreserva);
  void consultarDisponibilidad(std::string tipo, std::string conDispInicio, 
  std::string conDispFin);
  bool cancelarReserva(int numReserva);
};

#endif //POO_GESTIONHOTEL_H
