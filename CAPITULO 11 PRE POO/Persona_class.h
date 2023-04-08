#ifndef PERSONA_CLASS_H
#define PERSONA_CLASS_H


#include <string>
using namespace std;

class Persona_class{

private:
  string nombre = " ";
  int edad = 0;

public:
  Persona_class();
  void setNombre(string nombre);
  string getNombre() const;
  void setEdad(int edad);
  int getEdad() const;
  void mostrar_DatosCompletos() const;



};//FIN DE LA CLASE Persona_class

#endif
