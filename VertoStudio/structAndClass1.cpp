#include <iostream>
struct Vertex{

//private:
    int x, y, z;

    void setCoordinatesToCero();

    void setCoordinatesToOne(){
        x = y = z = 1;
    }
};

void Vertex::setCoordinatesToCero(){
    x = y = z = 0;
}


int main(){

    Vertex v1;

    v1.x = 11;
    v1.y = 22;
    v1.z = 33;

    std::cout << "v1x: " << v1.x << std::endl;
    std::cout << "v1y: " << v1.y << std::endl;
    std::cout << "v1z: " << v1.z << std::endl << std::endl;

    v1.setCoordinatesToCero();

    std::cout << "v1x: " << v1.x << std::endl;
    std::cout << "v1y: " << v1.y << std::endl;
    std::cout << "v1z: " << v1.z << std::endl << std::endl;

    v1.setCoordinatesToOne();

    std::cout << "v1x: " << v1.x << std::endl;
    std::cout << "v1y: " << v1.y << std::endl;
    std::cout << "v1z: " << v1.z << std::endl << std::endl;

    return 0;
}