#ifndef POO_RESERVA_H
#define POO_RESERVA_H
#include <string>

enum tipoGarantia{
  Deposito,
  Tarjeta,
  Prepagado,
};

enum estadoDeReserva{
  Confirmada,
  Cancelada,
  NoShow,
};
class Reserva {
  tipoGarantia tipoG;
  estadoDeReserva estadoR;
  int numReserva;
  int docHuesped;
  int idHabitacion;
  std::string inicioReserva;
  std::string finReserva;
  bool reservaGrupal;
public:
  Reserva(tipoGarantia tipG, estadoDeReserva estR, int numR, int docH, int idH, std::string start, std:: string end, 
  bool reservaG);
  int NumReserva();
  int DocHuesped();
  int IdHabitacion();
  std::string InicioReserva();
  std::string FinReserva();
  bool ReservaGrupal();
};
#endif //POO_RESERVA_H
