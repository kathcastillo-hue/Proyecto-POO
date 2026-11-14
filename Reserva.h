#ifndef POO_RESERVA_H
#define POO_RESERVA_H
#include <string>

enum tipoDeGarantia{
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
  tipoDeGarantia tipoG;
  estadoDeReserva estadoR;
  int numReserva;
  int docHuesped;
  int idHabitacion;
  std::string inicioReserva;
  std::string finReserva;
  bool reservaGrupal;
public:
  Reserva();
  Reserva(tipoDeGarantia tipG, estadoDeReserva estR, int numR, int docH, int idH, 
  std::string start, std:: string end, bool reservaG);
  tipoDeGarantia TipoDeGarantia();
  estadoDeReserva EstadoR();
  int NumReserva();
  int DocHuesped();
  int IdHabitacion();
  std::string InicioReserva();
  std::string FinReserva();
  void cambiarFechas( std::string start, std:: string end, std::string hoy);
  void cancelarReserva();
  void aplicarNoShow();
  void quitarNoShow(bool causaJust);
  bool ReservaGrupal();
};
#endif //POO_RESERVA_H
