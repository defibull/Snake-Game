//
//  globals.h
//  Project 1
//
//  Created by Shashank Khanna  on 1/7/15.
//  Copyright (c) 2015 CS 32. All rights reserved.
//

#ifndef GLOBALS_INCLUDED
#define GLOBALS_INCLUDED

///////////////////////////////////////////////////////////////////////////
// Manifest constants
///////////////////////////////////////////////////////////////////////////

const int MAXROWS = 20;             // max number of rows in the pit
const int MAXCOLS = 40;             // max number of columns in the pit
const int MAXSNAKES = 180;          // max number of snakes allowed

const int UP    = 0;
const int DOWN  = 1;
const int LEFT  = 2;
const int RIGHT = 3;

// UTILITIES PROTOTYPE DEFINITIONS
int decodeDirection(char dir);
bool directionToDeltas(int dir, int& rowDelta, int& colDelta);
void clearScreen();

#endif //GLOBALS_INCLUDED
