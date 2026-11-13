#include "CierreNocturno.h"
#include <iostream>
using namespace std;

CierreNocturno::CierreNocturno() : cierreEjecutado(false), ingresosTotalesConsolidados(0) {}

void CierreNocturno::ejecutarCierreNocturno(vector<Cuenta>& listaCuentas) {
    if (cierreEjecutado) {
        cout << "[CIERRE NOCTURNO] El cierre ya fue ejecutado previamente para esta jornada.\n";
        return;
    }

    ingresosTotalesConsolidados = 0;
    cout << "      EJECUTANDO PROCESO DE CIERRE NOCTURNO       \n";


    for (auto& cuenta : listaCuentas) {
        double subtotal = cuenta.getSaldoPendiente();
        ingresosTotalesConsolidados += subtotal;

        // Se congela/bloquea la cuenta usando el método de tu clase Cuenta
        cuenta.bloquearFolio(); // (Nota: puedes renombrarlo a cuenta.bloquearCuenta() si gustas)
        cout << "Cuenta/Folio #" << cuenta.getIdCuenta() << " consolidado y BLOQUEADO. Subtotal: $" << subtotal << "\n";
    }

    cierreEjecutado = true;
    cout << "\n[EXITO] Cierre nocturno completado." << endl;
    cout << "Ingresos totales del dia: $" << ingresosTotalesConsolidados << "\n";
    cout << "A partir de este momento no se permiten cambios directos sin autorizacion.\n";

}

bool CierreNocturno::solicitarAjustePoscierre(Cuenta& cuenta, double monto, const string& motivo, const string& autorizador) {
    if (!cierreEjecutado) {
        // Si aún no se ejecuta el cierre, el ajuste se aplica directamente
        cuenta.aplicarAjuste(monto, motivo);
        return true;
    }

    if (autorizador.empty()) {
        cout << "[DENEGADO] Se requiere la firma/nombre de un gerente autorizador para cambios poscierre.\n";
        return false;
    }

    // Aplicar el ajuste en la cuenta bloqueada
    cuenta.aplicarAjuste(monto, motivo);

    // Registrar detalladamente en la bitácora de auditoría exigida por el proyecto
    RegistroAjuste reg = { cuenta.getIdCuenta(), monto, motivo, autorizador, "2026-10-23 23:59" };
    bitacoraAuditoria.push_back(reg);

    cout << "[AUDITORIA] Ajuste poscierre registrado en bitacora por autorizacion de: " << autorizador << ".\n";
    return true;
}

void CierreNocturno::mostrarReporteConsolidado() const {
    cout << "\n REPORTE DE AUDITORIA POSCIERRE NOCTURNO \n";
    cout << "Estado Cierre: " << (cierreEjecutado ? "EJECUTADO" : "PENDIENTE") << "\n";
    cout << "Ingresos Consolidados del Dia: $" << ingresosTotalesConsolidados << "\n";
    cout << "Total de Ajustes Especiales Poscierre: " << bitacoraAuditoria.size() << "\n";

    for (const auto& adj : bitacoraAuditoria) {
        cout << " - Cuenta #" << adj.idCuenta << " | Monto Ajuste: $" << adj.monto
                  << " | Motivo: " << adj.motivo << " | Autorizado por: " << adj.autorizador << "\n";
    }
    cout << "-----------------------------------------------\n";
}

bool CierreNocturno::estaCierreEjecutado() const {
    return cierreEjecutado;
}
