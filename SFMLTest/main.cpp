#include <iostream>
#include "Game.h"

using namespace sf;

int main()
{

    // Init game engine

    Game game;

    // Game Loop

    while (game.running())
    {
        //update

        game.update();
        //render

        game.render();   
    }

   
    return 0;
}
