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
