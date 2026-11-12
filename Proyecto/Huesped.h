#ifndef POO_HUESPED_H
#define POO_HUESPED_H
#include <string>

enum claseDeCliente {
  Individual,
  Agencia,
  Corporativo,
};

class Huesped {
  claseDeCliente cliente;
  int identificacion;
  std::string nombre;
  int puntos;
public:
  Huesped(claseDeCliente c, int id, std::string name, int punto);
  claseDeCliente getClaseDeCliente();
  int getIdentificacion();
  std::string getNombre();
  int getPuntos();
  void añadirPuntos(int puntos);
  void quitarPuntos(int puntos);
};

#endif //POO_HUESPED_H
