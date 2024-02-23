#ifndef TEXTUREMANAGER_H_
#define TEXTUREMANAGER_H_

#include "game.hpp"
#include <SDL2/SDL_render.h>

class TextureManager {
    public:
    static SDL_Texture* LoadTexture(const char* fileName, SDL_Renderer* ren);
};

#endif // TEXTUREMANAGER_H_
