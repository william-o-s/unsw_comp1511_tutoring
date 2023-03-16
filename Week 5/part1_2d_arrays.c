// 2D Arrays Practice
// Written by William Setiawan (z5388080)
//  on 16/3/2023

#include <stdio.h>

#define SIZE 5

// Function Prototype
int did_player_win(char player, char board[SIZE][SIZE]);

int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    if (did_player_win('X', no_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', no_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
}

// Function Implementation:
// Determines whether a given player has won the game of tictactoe
// by getting SIZE tokens in a row, in any direction.
int did_player_win(char player, char board[SIZE][SIZE]) {
    // TODO Implement this function.
    return 0;

    // EXTRA: do you know how 2D arrays are stored in memory?
}