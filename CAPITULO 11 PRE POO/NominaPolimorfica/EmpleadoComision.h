#ifndef EMP_COMISION_H
#define EMP_COMISION_H
#include <string>
#include "Empleado.h"

class EmpleadoPorComision: public Empleado{

public:
    EmpleadoPorComision(const std::string &nom, const std::string &ape,
        const std::string &num_Seg_soc, double vent_brutas = 0.0,
        double tarifa_comision = 0.0);

    virtual ~EmpleadoPorComision() { }


    void setTarifaComision(double tarifa_comision);
    double getTarifaComision() const;

    void setVentasBrutas(double ventas_brutas);
    double getVentasBrutas() const;

    virtual double ingresos() const override;
    virtual void imprimir() const override;


private:
    double tarifaComision;
    double ventasBrutas;

};

#endif //EMP_COMISION_H