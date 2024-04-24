#ifndef PLANE_H
#define PLANE_H

#include "gameobject.h"

class Plane: public GameObject
{
public:
    Plane();

    virtual ~Plane(){}
    void setTexture(SDL_Texture *_texture);
    virtual void draw(SDL_Renderer *_renderer);
    virtual void update();

private:
    SDL_Texture *texture = nullptr;

};

#endif // PLANE_H
