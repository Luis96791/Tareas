#include "Sprite2.h"

Sprite2::Sprite2(SDL_Renderer* renderer, string path, int frames)
{
    this->renderer = renderer;
    texture = IMG_LoadTexture(renderer,path.c_str());
    int w,h;
    SDL_QueryTexture(texture,NULL,NULL,&w,&h);
    rect.w=w;
    rect.h=h;
    rect.x=100;
    rect.y=0;
    this->frames = frames;
}

Sprite2::~Sprite2()
{
    //dtor
}

void Sprite2::draw()
{
    SDL_RenderCopy(renderer, texture, NULL, &rect);
}


