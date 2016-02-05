#include "Move2.h"

Move2::Move2(SDL_Renderer* renderer,vector<Sprite2*>sprites2)
{
    this->renderer=renderer;
    for(int i=0;i<sprites2.size();i++)
    {
        this->sprites2.push_back(sprites2[i]);
    }
    current_sprite=0;
    frame=0;
    current_sprite_frame=0;
}

Move::~Move()
{
    //dtor
}

void Move::draw()
{
    Sprite2* sprite2 = sprites2[current_sprite];
    sprite2->draw();
    current_sprite_frame++;
    if(current_sprite_frame>=sprite2->frames)
    {
        current_sprite++;
        if(current_sprite>=sprites2.size())
            current_sprite=0;
        current_sprite_frame=0;
    }

    frame++;
}

