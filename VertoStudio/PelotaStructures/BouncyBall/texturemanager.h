#ifndef TEXTUREMANAGER_H
#define TEXTUREMANAGER_H

#include <unordered_map>
#include <string>
#include <SDL.h>

class TextureManager
{
public:
    ~TextureManager();

    void setTexture(const std::string &name, SDL_Texture *tex);
    SDL_Texture *getTexture(const std::string &name) ;

    void dropTexture(const std::string &name);
    static void setRenderer(SDL_Renderer *rend);
private:

    std::unordered_map<std::string, SDL_Texture*> textures;

    static SDL_Renderer *renderer;
};

#endif // TEXTUREMANAGER_H
