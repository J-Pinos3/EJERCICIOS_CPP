#include <iostream>
class Vertex{
private:
    int x, y, z;

public:
    void setCoordinatesToCero();

    void setCoordinatesToOne(){
        x = y = z = 1;
    }

    void set(int vx, int vy, int vz){
        this->x = vx;
        this->y = vy; 
        this->z = vz;
    }

    void showCoordinates(){
        std::cout << "x: "<< x << 
                    "\ny: " << y 
                    << "\nz: " << z << std::endl; 
    }

};

void Vertex::setCoordinatesToCero(){
    x = y = z = 0;
}


int main(){

    Vertex v1; v1.set(200,300,400);


    v1.showCoordinates();

    v1.setCoordinatesToCero();
    v1.showCoordinates();

    v1.setCoordinatesToOne();
    v1.showCoordinates();

    return 0;
}