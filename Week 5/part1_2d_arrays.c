// 2D Arrays Practice
// Written by William Setiawan (z5388080)
//  on 16/3/2023

#include <stdio.h>

#define SIZE 5

#define WON 1
#define LOST 0

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
    // Check the left diagonal
    int left_diagonal_flag = WON;
    for (int index = 0; index < SIZE; index++) {
        if (board[index][index] != player) {
            left_diagonal_flag = LOST;
        }
    }
    if (left_diagonal_flag == WON) {
        return WON;
    }

    // Check the right diagonal
    int right_diagonal_flag = WON;
    for (int index = 0; index < SIZE; index++) {
        if (board[index][SIZE - index - 1] != player) {
            right_diagonal_flag = LOST;
        }
    }
    if (right_diagonal_flag == WON) {
        return WON;
    }

    // Check the horizontals
    for (int row_index = 0; row_index < SIZE; row_index++) {
        int horizontal_flag = WON;
        for (int col_index = 0; col_index < SIZE; col_index++) {
            if (board[row_index][col_index] != player) {
                horizontal_flag = LOST;
            }
        }

        if (horizontal_flag == WON) {
            return WON;
        }
    }

    // Check the verticals
    for (int col_index = 0; col_index < SIZE; col_index++) {
        int vertical_flag = WON;
        for (int row_index = 0; row_index < SIZE; row_index++) {
            if (board[row_index][col_index] != player) {
                vertical_flag = LOST;
            }
        }

        if (vertical_flag == WON) {
            return WON;
        }
    }

    return 0;

    // EXTRA: do you know how 2D arrays are stored in memory?
}