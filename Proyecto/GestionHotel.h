#ifndef POO_GESTIONHOTEL_H
#define POO_GESTIONHOTEL_H
#include <string>

class GestionHotel{
  const int HabitacionesMax=10;
  const int ReservasMax=5;
  Habitaciones habitaciones[HabitacionesMax];
  Reservas reservas[ReservasMax];
  int numeroHab;
  int numeroRes;
public:
  GestionHotel();
  bool HabitacionOcupada(Habitaciones hab);
  bool CruceHabitacion(int idHab, std::fechaI, std::fechaF);
  bool NuevaReserva(Reserva Nreserva);
  bool consultarDisponibilidad(std::string conDispInicio, std::string conDispFin);
  bool cancelarReserva(int numReserva);
};

#endif //POO_GESTIONHOTEL_H
