//
//  Game.h
//  Project 1
//
//  Created by Shashank Khanna  on 1/7/15.
//  Copyright (c) 2015 CS 32. All rights reserved.
//

#ifndef GAME_INCLUDED
#define GAME_INCLUDED

class Pit;
class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nSnakes);
    ~Game();
    
    // Mutators
    void play();
    
private:
    Pit* m_pit;
};

#endif //GAME_INCLUDED
