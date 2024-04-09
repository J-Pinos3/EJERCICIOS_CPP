#ifndef VERTEX_h
#define VERTEX_h

class Vertex{
private:
    int x, y, z;

public:
    void setCoordinatesToCero();

    void setCoordinatesToOne();

    void setCoordinates(int vx, int vy, int vz);

    void showCoordinates();

};

#endif //VERTEX_h