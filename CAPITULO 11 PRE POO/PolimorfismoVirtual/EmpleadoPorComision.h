#ifndef COMISION_H
#define COMISION_H
#include <string>


class EmpleadoPorComision{

public:
    EmpleadoPorComision(const std::string &, const std::string &,
        const std::string&, double = 0.0, double = 0.0);


    void setPrimerNombre(const std::string &);
    std::string getPrimerNombre() const;


    void setApellido(const std::string &);
    std::string getApellido() const;


    void setSeguroSocial(const std::string &);
    std::string getSeguroSocial() const;

    void setVentasBrutas(double);
    double getVentasBrutas() const;


    void setTarifaComision(double);
    double getTarifaComision() const;

    virtual double ingresos() const;
    virtual void imprimir() const;

private:

    std::string nombre;
    std::string apellido;
    std::string seguroSocial;
    double ventasBrutas;
    double tarifaComision;

};


#endif //COMISION_H