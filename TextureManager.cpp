#include "TextureManager.h"
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_surface.h>

SDL_Texture* TextureManager::LoadTexture(const char* texture, SDL_Renderer* ren){
    SDL_Surface* tempSurface = IMG_Load(texture);
    SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, tempSurface);
    SDL_FreeSurface(tempSurface);

    return tex;
}
