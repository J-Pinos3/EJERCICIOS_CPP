#include "gameobject.h"
#include <iostream>

GameObject::GameObject()
{

}


void GameObject::setPosition(float x, float y){
    this->x = x;
    this->y = y;
}


void GameObject::update(){
    std::cout << "update called from Super class\n" ;
}
