#ifndef EMP_COMISION_H
#define EMP_COMISION_H
#include <string>

class EmpleadoComision{

public:
    EmpleadoComision(const std::string & nom= "", const std::string &ape="", const std::string &nss ="", double v = 0.0, double t = 0.0);

    void setPrimerNombre(const std::string &);
    std::string getPrimerNombre() const;

    void setApellidoPaterno(const std::string &);
    std::string getApellidoPaterno() const;

    void setNumeroSeguroSocial(const std::string &);
    std::string getNumeroSeguroSocial() const;

    void setVentasBrutas(double);
    double getVentasBrutas() const;

    void setTarifaComision(double);
    double getTarifaComision() const;

    double ingresos() const;
    void imprimir() const;

private:
    std::string primerNombre;
    std::string apellidoPaterno;
    std::string numeroSeguroSocial;
    double ventasBrutas;
    double tarifaComision;

};


#endif //EMP_COMISION_H