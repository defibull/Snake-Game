//
//  History.h
//  Project 1
//
//  Created by Shashank Khanna  on 1/10/15.
//  Copyright (c) 2015 CS 32. All rights reserved.
//

#ifndef HISTORY_INCLUDED
#define HISTORY_INCLUDED
#include "globals.h"
class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
private:
    int m_rows;
    int m_cols;
    int m_historyArray[MAXROWS][MAXCOLS];
};



#endif // HISTORY_INCLUDED
