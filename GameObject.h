#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_
#include "game.hpp"
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>

class GameObject{
    public:
    GameObject(const char* texturesheet, SDL_Renderer* ren, int posx, int posy);
    ~GameObject();

    void Update();
    void Render();

    private:
    int xpos;
    int ypos;

    SDL_Texture* objTexture;
    SDL_Rect srcRect, destRect;
    SDL_Renderer* renderer;
};


#endif // GAMEOBJECT_H_
