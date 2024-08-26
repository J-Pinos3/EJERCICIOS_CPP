#ifndef SER_VIVO_H
#define SER_VIVO_H

class SerVivo{

public:
    SerVivo();
    virtual ~SerVivo() { }

    
    virtual void MeAlimento();
    virtual void Habito();
    virtual void MeReproduzco();
    virtual void Respiro()=0;
    virtual void MeDesplazo()=0;

    int getPosicionX() const;
    int getPosicionY() const;

    int vecesReproducido() const;
    int vecesComidas() const;
private:
    int posicionX;
    int posicionY;
    int vecesReproduciendoce;
    int vecesComiendo;
};



#endif //SER_VIVO_H