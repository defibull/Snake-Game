//
//  Player.h
//  Project 1
//
//  Created by Shashank Khanna  on 1/7/15.
//  Copyright (c) 2015 CS 32. All rights reserved.
//

#ifndef PLAYER_INCLUDED
#define PLAYER_INCLUDED
class Pit ;
class Player
{
public:
    // Constructor
    Player(Pit *pp, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    int  age() const;
    bool isDead() const;
    
    // Mutators
    void   stand();
    void   move(int dir);
    void   setDead();
    
private:
    Pit*  m_pit;
    int   m_row;
    int   m_col;
    int   m_age;
    bool  m_dead;
};



#endif // PLAYER_INCLUDED