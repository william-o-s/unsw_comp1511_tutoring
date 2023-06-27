// William Setiawan (z5388080)
// on 27/6/2023

#include <stdio.h>

// Constants
#define SIZE 5
#define TRUE 1
#define FALSE 0

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
        printf("X won the first board!\n");
    } else if (did_player_win('O', no_wins_board)) {
        printf("O won the first board!\n");
    } else {
        printf("Nobody has won the first board!\n");
    }

    if (did_player_win('X', x_wins_board)) {
        printf("X won the second board!\n");
    } else if (did_player_win('O', x_wins_board)) {
        printf("O won the second board!\n");
    } else {
        printf("Nobody has won the second board!\n");
    }

    if (did_player_win('X', o_wins_board)) {
        printf("X won the third board!\n");
    } else if (did_player_win('O', o_wins_board)) {
        printf("O won the third board!\n");
    } else {
        printf("Nobody has won the third board!\n");
    }
}

// Function Implementation:
//      Determines whether a given player has won the game of tictactoe
//      by getting SIZE tokens in a row, in any direction.
//          If the player won, return TRUE.
//          If not, return FALSE.
int did_player_win(char player, char board[SIZE][SIZE]) {
    // TODO Implement this function.
    // HINT What are the winning conditions?
    return 0;
}
