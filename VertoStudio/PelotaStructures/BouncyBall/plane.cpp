#include "plane.h"

Plane::Plane()
{

}


void Plane::setTexture(SDL_Texture *_texture){

    (*this).texture = _texture;
}


void Plane::draw(SDL_Renderer *_renderer){
    SDL_Rect rect = {(int)x, (int)y, 35, 24};

    SDL_RenderCopy(_renderer, texture, nullptr,&rect);

}


void Plane::update(){
    //GameObject::update(); from super class
    x-=2;
    //y += 2;
    //y*=-0.3;
}
