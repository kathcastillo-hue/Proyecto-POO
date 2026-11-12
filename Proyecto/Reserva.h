#ifndef POO_RESERVA_H
#define POO_RESERVA_H
#include <string>
enum tipoGarantia{
  Deposito,
  Tarjeta,
  Pregagado,
};

enum estadoDeReserva{
  Confirmada;
  Cancelada,
  NoShow,
}
class Reserva {
  int numReserva;
  int docHuesped;
  int idHabitacion;
  std::string inicioReserva;
  std::string finReserva;
  bool reservaGrupal;
public:
  Reserva(int numR, int docH, int idH, std::string start, std:: string end, 
  bool reservaG);
  int NomReserva();
  int DocHuesped();
  int IdHabitacion();
  std::string FinReserva();
  bool reservaGrupal();
};
#endif //POO_RESERVA_H
