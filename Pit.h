//
//  Pit.h
//  Project 1
//
//  Created by Shashank Khanna  on 1/7/15.
//  Copyright (c) 2015 CS 32. All rights reserved.
//

#ifndef PIT_INCLUDED
#define PIT_INCLUDED
#include <string>
#include <iostream>
#include "globals.h"
#include "History.h"
using namespace std;
class Player;
class Snake ;

class Pit
{
public:
    // Constructor/destructor
    Pit(int nRows, int nCols);
    ~Pit();
    
    // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     snakeCount() const;
    int     numberOfSnakesAt(int r, int c) const;
    void    display(string msg) const;
    History& history();

    
    // Mutators
    bool   addSnake(int r, int c);
    bool   addPlayer(int r, int c);
    bool   destroyOneSnake(int r, int c);
    bool   moveSnakes();
    
private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Snake*  m_snakes[MAXSNAKES];
    int     m_nSnakes;
    History m_history;
};



#endif //PIT_INCLUDED
