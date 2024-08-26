#ifndef VEHICULO_HPP_
#define VEHICULO_HPP_
#include <string>

namespace umalcc{

    class Vehiculo{

        public:
            Vehiculo(const std::string& i);
            virtual ~Vehiculo();
            virtual std::string id() const;

    };

}

#endif //VEHICULO_HPP_