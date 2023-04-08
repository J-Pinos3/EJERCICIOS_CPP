#ifndef VECTOR_H
#define VECTOR_H

class Vector{

public:
    Vector(double a, double b, double c);

    void setX(double x);
    void setY(double y);
    void setZ(double z);

    double getX() const;
    double getY() const;
    double getZ() const;

    void mostrar_vector() const;
    bool son_iguales(Vector a);
    bool son_iguales_v2(Vector *a);
    bool son_iguales_v3(const Vector &a);

    double pitagorazo();


private:
    double x;
    double y;
    double z;

};


#endif // VECTOR_H
