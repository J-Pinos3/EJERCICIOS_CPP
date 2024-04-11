#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <SDL.h>
#include <SDL_image.h>

class GameObject
{
public:
    GameObject();
    virtual ~GameObject(){}
    //when putting =0 the class becomes purely abstract
    virtual void draw(SDL_Renderer *rend)=0;
    virtual void update()=0;

    void setPosition(float x, float y);

protected:
    float x = 0, y = 0;

};

#endif // GAMEOBJECT_H
