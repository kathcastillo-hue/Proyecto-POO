#include "Cuenta.h"
#include <iostream>

Cuenta::Cuenta(int idC, int idR, double aloja) : idCuenta(idC), idReserva(idR), totalAlojamiento(aloja), bloqueadaPorCierre(false) {
    saldoPendiente = calcularSubtotal();
}

bool Cuenta::agregarConsumo(const Consumo& c) {
    if (bloqueadaPorCierre) {
        std::cout << "ERROR: La cuenta " << idCuenta << " esta bloqueado por Cierre Nocturno. Requiere autorizacion.\n";
        return false;
    }
    consumos.push_back(c);
    saldoPendiente += c.getMonto();
    return true;
}

double Cuenta::calcularSubtotal() const {
    double total = totalAlojamiento;
    for (const auto& c : consumos) {
        total += c.getMonto();
    }
    return total;
}

double Cuenta::calcularFacturaFinal(double porcentajeImpuesto) const {
    double subtotal = calcularSubtotal();
    return subtotal * (1.0 + porcentajeImpuesto / 100);
}

void Cuenta::dividirCuenta(double porcentaje, std::string nuevoResponsable) {
    if (porcentaje <= 0 || porcentaje >= 100) return;
    double montoDividido = calcularSubtotal() * (porcentaje / 100);
    saldoPendiente -= montoDividido;
    std::cout << " Se transfirieron $" << montoDividido << " al responsable: " << nuevoResponsable << "\n";
}

bool Cuenta::pagarConPuntos(int puntos, double valorPorPunto) {
    double descuento = puntos * valorPorPunto;
    if (descuento > saldoPendiente) {
        descuento = saldoPendiente;
    }
    saldoPendiente -= descuento;
    std::cout << "[PAGO] Se aplicaron " << puntos << " puntos ($" << descuento << " descuento). Saldo restante: $" << saldoPendiente << "\n";
    return true;
}

bool Cuenta::estaBloqueada() const { return bloqueadaPorCierre; }
void Cuenta::bloquearFolio() { bloqueadaPorCierre = true; }

void Cuenta::aplicarAjuste(double monto, const std::string& motivo) {
    saldoPendiente += monto;
    std::cout << "[AJUSTE AUTORIZADO] Folio " << idCuenta << ": $" << monto << " | Motivo: " << motivo << "\n";
}

int Cuenta::getIdCuenta() const { return idCuenta; }
double Cuenta::getSaldoPendiente() const { return saldoPendiente; }
