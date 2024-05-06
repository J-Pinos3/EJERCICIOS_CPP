#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>

class Empleado{

public:
    Empleado(const std::string &, const std::string &, const std::string &);
    virtual ~Empleado(){ }

    void setNombre(const std::string &);
    std::string getNombre() const;

    void setApellido(const std::string &);
    std::string getApellido() const;

    void setNumSeguroSocial(const std::string &);
    std::string getNumSeguroSocial() const;


    //la función virtual pura ingresos no tiene implementación
    //y hace que empleado sea una clase abstracta
    virtual double ingresos() const=0;
    virtual void imprimir() const;


private:
    std::string primerNombre;
    std::string apellidoPaterno;
    std::string numSeguroSocial;

};

#endif //EMPLEADO_H