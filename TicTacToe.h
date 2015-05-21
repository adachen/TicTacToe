//
//  TicTacToe.h
//  midterm
//
//  Created by Akanksha Verma on 11/17/14.
//  Copyright (c) 2014 Akanksha Verma. All rights reserved.
//

#ifndef _TicTacToe_
#define _TicTacToe_
#include <stdio.h>
#include <iostream>

using namespace std;

//tictactoe class declaration
class TicTacToe
{
private:
    //multidimensional array declaration
    char board[3][3];

public:

    //function declarations
    void CreateBoard();
    void PrintBoard();
    int GetMove(int i , int j);
    int GetWinX(char board[3][3]);
    int GetWinO(char board[3][3]);
    char player;
    int w, g;


};

#endif /* defined(_TicTacToe_) */
