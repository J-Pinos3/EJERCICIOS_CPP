#include <stdio.h>
#include <SDL.h>
#include <iostream>
#include <SDL_image.h>
#include "BouncyBall.h"
#include "plane.h"
#include "gameobject.h"

static SDL_Texture *ball_texture = nullptr, *plane_texture = nullptr;
static const int nBalls = 10;
const int MAX_OBJECTS = 100;
int numGameObjects = 0;

GameObject *arr_objects[MAX_OBJECTS] = {nullptr};

//BouncyBall balls[nBalls];
//Plane plane;

int processEvents(SDL_Window *window){
    SDL_Event event;
    int done = 0;

    while(SDL_PollEvent(&event)){
        switch(event.type){
            case SDL_WINDOWEVENT_CLOSE:{
                if(window){
                    SDL_DestroyWindow(window);
                    window = nullptr;
                    done = 1;
                }
            }
            break;
            case SDL_KEYDOWN:{
                switch(event.key.keysym.sym){
                    case SDLK_ESCAPE:
                        done = 1;
                    break;
                }
            }
            break;
            case SDL_QUIT:
                done = 1;
                break;
        }
    }

    return done;
}


void doRender(SDL_Renderer *renderer){
    SDL_SetRenderDrawColor(renderer, 240, 240, 255, 255);
    SDL_RenderClear(renderer);


    SDL_SetRenderDrawColor(renderer, 255,255,255,255);

    // SDL_Rect rect = { 0,0,32,32 };
    //SDL_RenderCopy(renderer, ball, nullptr, &rect);

    for(int i = 0; i < MAX_OBJECTS; i++){
        if(arr_objects[i]){
            arr_objects[i]->draw(renderer);
        }
    }


    SDL_RenderPresent(renderer);
}


int main(int argc, char* args[]) {

    //if this class is abstract, the object has to be a pointer
    //GameObject *obj;

    SDL_Window* window;
    SDL_Renderer* renderer;

    SDL_Init(SDL_INIT_VIDEO);


    window = SDL_CreateWindow(
        "Game Window",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        0);

    renderer = SDL_CreateRenderer(window, -1,SDL_RENDERER_ACCELERATED);

    auto surface = IMG_Load("ball.png");
    if(surface){
        ball_texture = SDL_CreateTextureFromSurface(renderer, surface);
    }else{
        return 1;
    }
    SDL_FreeSurface(surface);


    surface = IMG_Load("plane.png");
    if(surface){
        plane_texture = SDL_CreateTextureFromSurface(renderer, surface);

    }else{
        return 1;
    }
    SDL_FreeSurface(surface);



    for(int i = 0; i < nBalls; i++){

        BouncyBall *ball = new BouncyBall();
        ball->setTexture( ball_texture );
        ball->setPosition(50+i*32,100);
        (*ball).setElasticity((float)i/nBalls);

        arr_objects[numGameObjects] = ball;
        numGameObjects++;
    }

    Plane *plane = new Plane();
    plane->setTexture(plane_texture);
    plane->setPosition(650,120);
    arr_objects[numGameObjects++] = plane;

    int done = 0;

    while(!done){
        done = processEvents(window);
        doRender(renderer);

        for(int i = 0; i < MAX_OBJECTS; i++){
            if(arr_objects[i]){
                arr_objects[i]->update();
            }
        }

        SDL_Delay(10);
    }

    for(int i = 0; i < MAX_OBJECTS; i++){
        if(arr_objects[i]){
            delete arr_objects[i];
            arr_objects[i] = nullptr;
        }
    }

    std::cout << "numGameObjects: " << numGameObjects << std::endl;
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);

    SDL_DestroyTexture(ball_texture);
    SDL_DestroyTexture(plane_texture);

    SDL_Quit();

    return 0;
}
