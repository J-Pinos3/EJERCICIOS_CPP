#ifndef BOUNCYBALL_H
#define BOUNCYBALL_H

#include <SDL.h>
#include <SDL_image.h>
#include "gameobject.h"


class BouncyBall : public GameObject{

public:

    virtual ~BouncyBall(){}

    void setTexture(SDL_Texture *_texture);
    //given that those 2 functions are already virtual in the base class
    //it is not necessary to put virtual here again
    virtual void draw(SDL_Renderer *_renderer);
    virtual void update();

    void setElasticity(float e);
private:
    SDL_Texture *texture = nullptr;
    float dy = 0;
    float elasticity = 0.5;
    const float GRAVITY = 0.04;
};


#endif // BOUNCYBALL_H
