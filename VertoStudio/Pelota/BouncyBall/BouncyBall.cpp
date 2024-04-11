#include "BouncyBall.h"
#include <cmath>

void BouncyBall::setTexture(SDL_Texture *_texture){

    (*this).texture = _texture;
}


void BouncyBall::draw(SDL_Renderer *_renderer){
    SDL_Rect rect = {(int)x, (int)y, 32, 32};

    SDL_RenderCopy(_renderer, texture, nullptr,&rect);
}


void BouncyBall::update(){
    if(y+32 < 480){
        y += dy;
        dy += GRAVITY;
    }else{
        dy *= -elasticity;
        y += dy*2;

        if( std::abs(dy) < 0.01){
            dy = 0;
        }
    }
}

void BouncyBall::setElasticity(float e){
    elasticity = e;
}


