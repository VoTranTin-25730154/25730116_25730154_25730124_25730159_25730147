@ -0,0 +1,37 @@
#include <iostream>
#include <windows.h>
#include <ctime>
#include "Common.h"
#include "Render.h"
#include "Tetromino.h"
#include "GameLogic.h"

using namespace std;

int main() 
{
    bool isSpecialKey = false;
    bool isRunning = true;
    bool isPaused = false;
 int type = 0, rot = 0, x = 5, y = 0;

    if (_kbhit()) {
        char key = _getch();
        if (key == 0 || key == -32) {
            key = _getch();
            isSpecialKey = true;
        }

        if (!isSpecialKey) {
            if (key == 'p' || key == 'P') {
                isPaused = !isPaused;

                gotoxy((BOARD_WIDTH + 5) * 2, 10);
                if (isPaused) cout << "PAUSED";
                else cout << "      ";
            }
            else if (key == KEY_ESC) isRunning = false;
        }
  
        if (!isPaused && isRunning) {
            clearPiece(type, rot, x, y);

            switch (key) {
            case KEY_LEFT:
                if (!checkCollision(type, rot, x - 1, y)) {
                    x--;
                }
                break;
            case KEY_RIGHT:
                if (!checkCollision(type, rot, x + 1, y)) {
                    x++;
                }
                break;
            case KEY_DOWN:
                if (!checkCollision(type, rot, x, y + 1)) y++;
                break;
            }
            drawPiece(type, rot, x, y);
        }
        isSpecialKey = false;
    }
	
	return 0;
