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
    }
	
	return 0;
}
