//
//  History.cpp
//  Project 1
//
//  Created by Shashank Khanna  on 1/10/15.
//  Copyright (c) 2015 CS 32. All rights reserved.
//

#include "History.h"
#include "globals.h"
#include <iostream>
using namespace std;
History::History(int nRows, int nCols)
{
    m_rows = nRows ;
    m_cols = nCols ;
    
    for (int i = 0; i < nRows; i++)
    {
        for(int j = 0; j<nCols; j++)
        {
            m_historyArray[i][j] = -1;
        }
    }
}

bool History::record(int r, int c)
{
    if (r < 1 || c < 1 || r > m_rows || c > m_cols)
        return false;
    else
    {
        m_historyArray[r-1][c-1]++;
    }
    
    return true ;
}

void History::display() const
{
    clearScreen();
    char character;
    for (int i = 0; i < m_rows; i++)
    {
        for(int j = 0; j<m_cols; j++)
        {
            if (m_historyArray[i][j] == -1)
                cout << '.' ;
            else
            {
                if (m_historyArray[i][j] < 26)
                {character = 'A'+ m_historyArray[i][j];}
                
                else
                {character = 'Z';}
                
                cout << character;}
            
        }
        cout << endl;
    }
}

