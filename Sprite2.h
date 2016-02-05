#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>

#include <iostream>
#include <vector>
#include "Hitbox.h"
using namespace std;

class Sprite2
{
    public:
        int frames;
        vector<Hitbox*>hitboxes;
        SDL_Texture *texture;
        SDL_Rect rect;
        SDL_Renderer* renderer;
        Sprite2(SDL_Renderer* renderer,string path,int frames);
        virtual ~Sprite2();
        void draw();
    protected:
    private:
};

