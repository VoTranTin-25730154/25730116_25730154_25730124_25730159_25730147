#include <fstream>
#include <string>
#include "Common.h"
#include "Tetromino.h"
#include "Render.h"

using namespace std;

int board[BOARD_HEIGHT][BOARD_WIDTH] = { 0 };

int score = 0;
int highScore = 0;
