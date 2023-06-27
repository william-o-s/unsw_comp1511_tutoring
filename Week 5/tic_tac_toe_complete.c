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

    char x_wins_diag[SIZE][SIZE] = {
        {'O', 'O', ' ', ' ', 'X'},
        {' ', 'X', ' ', 'X', ' '},
        {' ', 'X', 'X', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
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

    if (did_player_win('X', x_wins_diag)) {
        printf("X won the fourth board!\n");
    } else if (did_player_win('O', x_wins_diag)) {
        printf("O won the fourth board!\n");
    } else {
        printf("Nobody has won the fourth board!\n");
    }
}

// Function Implementation:
//      Determines whether a given player has won the game of tictactoe
//      by getting SIZE tokens in a row, in any direction.
//          If the player won, return TRUE.
//          If not, return FALSE.
int did_player_win(char player, char board[SIZE][SIZE]) {
    // When approaching a problem like this, always consider two situations:
    //      1. What does it mean to win?
    //      2. What does it mean to lose?
    // Then do whatever is easier

    // Check left-diagonal
    int is_left_diag_win = TRUE;
    for (int row = 0; row < SIZE; row++) {
        if (board[row][row] != player) {
            is_left_diag_win = FALSE;
        }
    }

    if (is_left_diag_win) {
        return TRUE;
    }

    // Check right-diagonal
    int is_right_diag_win = TRUE;
    for (int row = 0; row < SIZE; row++) {
        if (board[row][SIZE - row - 1] != player) {
            is_right_diag_win = FALSE;
        }
    }

    if (is_right_diag_win) {
        return TRUE;
    }

    // Check for a row-win
    for (int row = 0; row < SIZE; row++) {
        int is_row_win = TRUE;
        for (int col = 0; col < SIZE; col++) {
            if (board[row][col] != player) {
                is_row_win = FALSE;
            }
        }

        if (is_row_win) {
            return TRUE;
        }
    }

    // Check for a column-win
    for (int col = 0; col < SIZE; col++) {
        int is_col_win = TRUE;
        for (int row = 0; row < SIZE; row++) {
            if (board[row][col] != player) {
                is_col_win = FALSE;
            }
        }

        if (is_col_win) {
            return TRUE;
        }
    }

    return FALSE;
}
