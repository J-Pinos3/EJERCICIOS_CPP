#include <vector>
#include <list>
#include <stdio.h>
#include <SDL.h>
#include <iostream>
#include <SDL_image.h>
#include <cstdlib>
#include <ctime>
#include "BouncyBall.h"
#include "plane.h"
#include "gameobject.h"
#include "texturemanager.h"


static TextureManager *textureManager = nullptr;
static SDL_Texture *ball_texture = nullptr, *plane_texture = nullptr;
static const int nBalls = 10;
//std::vector<GameObject *> arr_objects;
std::list<GameObject *> arr_objects;

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

    for(auto gameObject: arr_objects){
        (*gameObject).draw(renderer);
        //gameObject->draw(renderer);
    }



    SDL_RenderPresent(renderer);
}


void doUpdates(SDL_Renderer *renderer){

    //cannot remove items while i iterate through the list
    std::list< std::list<GameObject * >::iterator > toDie;
    int numBalls = 0, numPlanes = 0;

    doRender(renderer);


    //for(auto gameObject : arr_objects){
    for(auto it = arr_objects.begin(); it != arr_objects.end(); it++){
        auto gameObject = *it;
        gameObject->update();

        BouncyBall *ballPtr = dynamic_cast<BouncyBall * >(gameObject);
        Plane *planePtr = dynamic_cast<Plane * >(gameObject);
        if( ballPtr != nullptr ){
            numBalls+=1;
        }else if( planePtr != nullptr ){

            if(planePtr->getX() < 0 ){
                //delete the plane
                //its dangerous to delete the iterator itself
                    //arr_objects.erase(it)
                toDie.push_back(it);
            }

            numPlanes++;
        }
    }

    for(auto objectToDelete : toDie){
        delete *objectToDelete;// * because i'm deleting the object
        arr_objects.erase(objectToDelete);
    }

    if(numPlanes == 0){
        Plane *plane = new Plane();
        plane->setTexture(plane_texture);
        plane->setPosition(640,rand()%480);
        arr_objects.push_back( plane);
    }
    std::cout << "# of balls: " << numBalls << std::endl;
    std::cout << "# of planes: " << numPlanes << std::endl;

}


int main(int argc, char* args[]) {

    //if this class is abstract, the object has to be a pointer
    //GameObject *obj;

    srand(time(NULL));
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

    TextureManager::setRenderer(renderer);
    textureManager = new TextureManager();


    ball_texture = textureManager->getTexture("ball.png");
//    auto surface = IMG_Load("ball.png");
//    if(surface){
//        ball_texture = SDL_CreateTextureFromSurface(renderer, surface);
//    }else{
//        return 1;
//    }
//    SDL_FreeSurface(surface);

    plane_texture = textureManager->getTexture("plane.png");
//    surface = IMG_Load("plane.png");
//    if(surface){
//        plane_texture = SDL_CreateTextureFromSurface(renderer, surface);

//    }else{
//        return 1;
//    }
//    SDL_FreeSurface(surface);



    for(int i = 0; i < nBalls; i++){

        BouncyBall *ball = new BouncyBall();
        ball->setTexture( ball_texture );
        ball->setPosition(50+i*32,100);
        (*ball).setElasticity((float)i/nBalls);

        arr_objects.push_back(ball);
    }


    int done = 0;


    while(!done){
        done = processEvents(window);

        doUpdates(renderer);
        SDL_Delay(10);
    }


    std::cout << "numGameObjects: " << arr_objects.size() << std::endl;
    /*With list I cannot use []
    for(int i = 0; i < arr_objects.size(); i++){
        delete arr_objects[i];
    }
    */
    for(auto gameObject : arr_objects){
        delete gameObject;
    }
    arr_objects.clear();



    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);

    SDL_DestroyTexture(ball_texture);
    SDL_DestroyTexture(plane_texture);

    delete textureManager;
    SDL_Quit();

    return 0;
}
