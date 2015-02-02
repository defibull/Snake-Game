// snakepit.cpp
////////////////////////
//// REMEMBER TO PUT FUNCTION PROTOTYPES IN THE HEADER FILES
////////////////////

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Snake.h"
#include "Player.h"
#include "globals.h"
#include "Pit.h"
#include "Game.h"
#include "History.h"
using namespace std;
///////////////////////////////////////////////////////////////////////////
//  main()
///////////////////////////////////////////////////////////////////////////
//input the player - remember to return false

int main()
{
    //Initialize the random number generator.  (You don't need to
    // understand how this works.)
    srand(static_cast<unsigned int>(time(0)));
    
    // Create a game
    // Use this instead to create a mini-game:   Game g(3, 3, 2);
    Game g(9,10,40);
    
    
    
    // Play the game
    g.play();
}

