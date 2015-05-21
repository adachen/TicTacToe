
//TicTacToe.cpp

#include "TicTacToe.h"
#include <iostream>

using namespace std;

//function definitions

//initializes all positions to be played in the grid to 0
void TicTacToe::CreateBoard(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            board[i][j]=' ';
        }
    }
}

//prints out the current state of the boards each time it is called
void TicTacToe::PrintBoard(){
    //initalizes each space in the board
    cout << "__TICTACTOE__ " <<endl <<endl;
	cout << "   |   |   " << endl;
	cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;
	cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;
	cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
	cout << "   |   |   " << endl;


}



//Gets the move from the user
int TicTacToe::GetMove(int i, int j){

    //do while loop to repeat until someone wins
     do{
        //ask user if they are player x or o
        cout << "Player 1 = (X) & Player = 2 (O)" << endl << endl << "Which Player are you?" <<endl << endl;
        cin >> player;

        //condition checks for valid inputs
        while((player != 'X') && (player != 'O') && (player != 'x') && (player != 'o')){
            cout << "Invalid Symbols, please re-enter proper symbols X or O" << endl;
            cin >> player;
        }

        //ask user for coordinates
        cout << "Enter your desired coordinates " << endl;
        cin >> i >> j;

        //checks for valid coordinates
        while(i > 2 || i < 0 || j > 2 || j < 0){
            cout << "Invalid Coordinates, please re-enter proper coordinates" << endl;
            cin >> i >> j;
        }

        //sets and prints the player's coordinates onto board
        board[i][j]=player;
        PrintBoard();

        //calls functions to check wins
        GetWinX(board);
        GetWinO(board);
        w = GetWinX(board);;
        g = GetWinO(board);;

        if(w==1){
            cout << "Player X Wins!" << endl;
            break;
        }
        else if(g==2){
            cout << "Player O Wins!" << endl;
            break;
        }



        if(w==4){
            cout << "This is a draw!" <<endl;
            break;
        }

    }while(w == 3 || g == 3);

}

//function checks if Player X wins
int TicTacToe::GetWinX(char board[3][3]){

    //loops through columns to check for wins
     for(int z=0; z<3; z++){
        if((board[z][0] == 'x' || board[z][0] == 'X') && (board[z][1] == 'x' || board[z][1] == 'X') && (board[z][2] == 'x' || board[z][2] == 'X')){
            return 1;
        }
    }

    //loops through rows to check for win
    for(int p=0; p<3; p++){
        if((board[0][p] == 'x' || board[0][p] == 'X') && (board[1][p] == 'x' || board[1][p] == 'X') && (board[2][p] == 'x' || board[2][p] == 'X')){
            return 1;
        }
    }

    //checks for win on the diagonals
    if((board[0][0] == 'x' || board[0][0] == 'X') && (board[1][1] == 'x' || board[1][1] == 'X') && board[2][2] == 'x' || board[2][2] == 'X'){
        return 1;
    }

    else if((board[0][2] == 'x' || board[1][1] == 'X') && (board[1][1] == 'x' || board[1][1] == 'X') && board[2][0] == 'x' || board[2][0] == 'X'){
        return 1;
    }

    return 3;
}

//function checks if Player O wins
int TicTacToe::GetWinO(char board[3][3]){

    //loops through columns to check for win
    for(int z=0; z<3; z++){
        if((board[z][0] == 'o' || board[z][0] == 'O') && (board[z][1] == 'o' || board[z][1] == 'O') && (board[z][2] == 'o' || board[z][2] == 'O')){
            return 2;
        }
    }

    //loops through rows to check for win
    for(int p=0; p<3; p++){
        if((board[0][p] == 'o' || board[0][p] == 'O') && (board[1][p] == 'o' || board[1][p] == 'O') && (board[2][p] == 'o' || board[2][p] == 'O')){
            return 2;
        }
    }

    //checks for win on the diagonals
    if((board[0][0] == 'o' || board[0][0] == 'O') && (board[1][1] == 'o' || board[1][1] == 'O') && board[2][2] == 'o' || board[2][2] == 'O'){
        return 2;
    }

    else if((board[0][2] == 'o' || board[1][1] == 'O') && (board[1][1] == 'o' || board[1][1] == 'O') && board[2][0] == 'o' || board[2][0] == 'O'){
        return 2;
    }

    return 3;
}








































