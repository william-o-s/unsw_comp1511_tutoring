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

    if (did_player_win('X', x_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', x_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }

    if (did_player_win('X', o_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', o_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
}

// Function Implementation:
// Determines whether a given player has won the game of tictactoe
// by getting SIZE tokens in a row, in any direction.
int did_player_win(char player, char board[SIZE][SIZE]) {
    // Check top-left to bottom-right diagonal
    // (0,0), (1,1), ..., (4,4)
    int left_diagonal_flag = WON;
    for (int index = 0; index < SIZE; index++) {
        if (board[index][index] != player) {
            left_diagonal_flag = LOST;
        }
    }
    if (left_diagonal_flag) {
        return WON;
    }

    // Check top-right to bottom-left diagonal
    // (0,4), (1, 3), (2,2), ..., (4,0)
    int right_diagonal_flag = WON;
    for (int index = 0; index < SIZE; index++) {
        if (board[index][SIZE - index] != player) {
            right_diagonal_flag = LOST;
        }
    }
    if (right_diagonal_flag) {
        return WON;
    }

    // Check both diagonals simultaneously using guards
    left_diagonal_flag = WON;
    right_diagonal_flag = WON;
    for (int index = 0; index < SIZE; index++) {
        if (board[index][index] != player) {
            left_diagonal_flag = LOST;
        }
        if (board[index][SIZE - index] != player) {
            right_diagonal_flag = LOST;
        }
    }
    if (left_diagonal_flag || right_diagonal_flag) {
        return WON;
    }

    // Check horizontals
    for (int row_index = 0; row_index < SIZE; row_index++) {
        int horizontal_flag = WON;
        for (int col_index = 0; col_index < SIZE; col_index++) {
            if (board[row_index][col_index] != player) {
                horizontal_flag = LOST;
            }
        }

        if (horizontal_flag) {
            return WON;
        }
    }

    // Check verticals
    for (int col_index = 0; col_index < SIZE; col_index++) {
        int vertical_flag = WON;
        for (int row_index = 0; row_index < SIZE; row_index++) {
            if (board[row_index][col_index] != player) {
                vertical_flag = LOST;
            }
        }

        if (vertical_flag) {
            return WON;
        }
    }

    // If nothing succeeded, then it lost
    return LOST;
}