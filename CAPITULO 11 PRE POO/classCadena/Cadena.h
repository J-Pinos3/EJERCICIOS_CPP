#ifndef CADENA_H
#define CADENA_H

class Cadena{

public:
    Cadena();
    Cadena(char *);
    Cadena (int n);
    Cadena (const Cadena& c);
    ~Cadena();

    void asignar(char *dest);
    char *Leer(char *c);

private:
    char *cad;

};



#endif //CADENA_H