#ifndef PAQUETE_h
#define PAQUETE_h
#include <string>

using std::string;

class Paquete{

public:
    Paquete(
        string nom, string direc,
        string ciud, string estad,
        string cod_post, string desti,
        double _peso, double _costo
    );

    void setPeso(double _peso);
    void setCosto(double _costo);

    double getPeso() const;
    double getCosto() const;

    double calcularCosto();

private:
    string nombre;
    string direccion;
    string ciudad;
    string estado;
    string codigo_postal;
    string destinatario;

    double pesoKG;
    double costoKG;
};

#endif //PAQUETE_h