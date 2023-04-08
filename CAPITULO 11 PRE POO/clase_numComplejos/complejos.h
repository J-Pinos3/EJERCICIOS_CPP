#ifndef COMPLEJOS_H
#define COMPLEJOS_H

namespace umalcc{

    class Complejo{
    public:
        Complejo();

        double getParte_Real() const;

        double getParte_Imag() const;

        void Sumar(const Complejo &a, const Complejo &b);//asigna la suma al complejo actual
        void Restar(const Complejo &a, const Complejo &b);
        void Multiplicar(const Complejo &a, const Complejo &b);
        void Dividir(const Complejo &a, const Complejo &b);

        bool es_igual(const Complejo &b) const;

        void Mostrar_Numero();
        void Ingresar_Numero();


    private:
        double real;
        double imag;

    }; ///FIN DE LA CLASE COMPLEJO

}





#endif // COMPLEJOS_H
