#include <iostream>
#include "Game.h"

using namespace sf;

int main()
{

    // Init game engine

    Game game;

    int windowW;
    int windowH;
    int squareS;
    int frameRate;

    std::cout << "Enter width of window: ";
    std::cin >> windowW;

    std::cout << "Enter height of window: ";
    std::cin >> windowH;

    std::cout << "Enter size of square: ";
    std::cin >> squareS;
    
    std::cout << "Enter frame rate: ";
    std::cin >> frameRate;




    game.initParams(windowH, windowW, squareS, frameRate);
    game.initWindow();
    game.initEnemies();
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
