#include <fstream>
#include <string>
#include "Common.h"
#include "Tetromino.h"
#include "Render.h"

using namespace std;

int board[BOARD_HEIGHT][BOARD_WIDTH] = { 0 };

int score = 0;
int highScore = 0;

bool checkCollision(int type, int rotation, int x, int y) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (TETROMINOES[type][rotation][i][j] == 1) {
                int nextX = x + j;
                int nextY = y + i;

                if (nextX < 0 || nextX >= BOARD_WIDTH || nextY >= BOARD_HEIGHT) {
                    return true;
                }

                if (nextY >= 0 && board[nextY][nextX] == 1) {
                    return true;
                }
            }
        }
    }
    return false;
}

void lockPiece(int type, int rotation, int x, int y) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (TETROMINOES[type][rotation][i][j] == 1) {
                board[y + i][x + j] = 1;
            }
        }
    }
}

void handleClearRows() {
    int rowsClearedInThisTurn = 0;

    for (int i = BOARD_HEIGHT - 1; i >= 0; i--) {
        bool isFull = true;
        for (int j = 0; j < BOARD_WIDTH; j++) {
            if (board[i][j] == 0) {
                isFull = false;
                break;
            }
        }
        if (isFull) {
            rowsClearedInThisTurn++;
            for (int k = i; k > 0; k--) {
                for (int j = 0; j < BOARD_WIDTH; j++) {
                    board[k][j] = board[k - 1][j];
                }
            }
            for (int j = 0; j < BOARD_WIDTH; j++) {
                board[0][j] = 0;
            }
            i++;
        }
    }
    if (rowsClearedInThisTurn > 0) {
        score += rowsClearedInThisTurn * 100;

        playGameSound(rowsClearedInThisTurn);
    }
}
