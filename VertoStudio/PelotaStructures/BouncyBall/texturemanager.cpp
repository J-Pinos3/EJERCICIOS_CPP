#include "texturemanager.h"
#include <SDL_image.h>

SDL_Renderer* TextureManager::renderer = nullptr;
void TextureManager::setRenderer(SDL_Renderer *rend){
    renderer = rend;
}

TextureManager::~TextureManager(){
    for(auto &entry : textures){
        SDL_DestroyTexture( entry.second );
    }
    textures.clear();
}

void TextureManager::setTexture(const std::string &name, SDL_Texture *tex){
    textures[name] = tex;
}


//SDL_Texture* TextureManager::getTexture(const std::string &name,SDL_Renderer *renderer){
SDL_Texture* TextureManager::getTexture(const std::string &name){
    auto it = textures.find(name);

    if(it == textures.end()){
        SDL_Texture *tex = nullptr;
        auto surface = IMG_Load(name.c_str());

        if(surface){
            tex = SDL_CreateTextureFromSurface(renderer, surface);
            setTexture(name, tex);
        }else{
            return NULL;
        }

        SDL_FreeSurface(surface);
        return tex;
    }

    return it->second ;
}

void TextureManager::dropTexture(const std::string &name){
    auto it = textures.find(name);
    if(it == textures.end()){
        SDL_DestroyTexture( it->second );
        textures.erase(name);
    }

}
