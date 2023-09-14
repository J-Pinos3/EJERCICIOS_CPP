#ifndef LISTA_HPP
#define LISTA_HPP

#include <array>

namespace umalcc{

    class ListaInt{

    public:
        ListaInt();
        ListaInt(const ListaInt& o);
        ListaInt& operator= (const ListaInt& o);
        
        bool llena() const;
        int size() const;
        void clear();

        void insertar(int pos, int dato);
        void eliminar(int pos);

        int acceder(int pos) const;
        void modificar(int pos, int dato);
    
    private:
        static const int MAX = 100;
        typedef std::array<int, MAX> Datos;
        
        void abrir_hueco(int pos);
        void cerrar_hueco(int pos);

        int sz;
        Datos ve;
    };

}



#endif //LISTA_HPP