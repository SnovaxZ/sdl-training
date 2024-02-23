#include "GameObject.h"
#include <SDL2/SDL_render.h>
#include "TextureManager.h"

GameObject::GameObject(const char* textureSheet, SDL_Renderer* ren, int posx, int posy) {
    renderer = ren;
    objTexture = TextureManager::LoadTexture(textureSheet, ren);

    xpos = posx;
    ypos = posy;
}

void GameObject::Update(){
    xpos++;
    ypos++;

    srcRect.h = 64;
    srcRect.w = 64;
    srcRect.x = 0;
    srcRect.y = 0;

    destRect.x = xpos;
    destRect.y = ypos;
    destRect.w = srcRect.w * 2;
    destRect.h = srcRect.h * 2;

}
void GameObject::Render(){
    SDL_RenderCopy(renderer, objTexture, &srcRect, &destRect);

}
