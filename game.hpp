#ifndef GAME_hpp
#define GAME_hpp
#include<SDL2/SDL.h>
#include <SDL2/SDL_video.h>
#include <SDL2/SDL_image.h>
#include <iostream>


class Game{
public:
        Game();
        ~Game();

        void init(const char* title, int xpos, int ypos, int height, int width, bool fullscreen);
        void handleEvents();
        void update();
        void render();
        void clean();

        bool running() {return isRunning; };

private:
    int count = 0;
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
};


#endif // GAME_H_
