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
    srand(time(0));

    int speed = 25;

    bool isKeepPlaying = true;
    bool isSpecialKey = false;

    score = 0;
    int timer = 0;
    int type = 0, rot = 0, x = 5, y = 0;

    bool isRunning = true;
    bool isPaused = false;

    system("cls");
    drawBoundary();
    loadHighScore();
    drawScore(score);
    drawPiece(type, rot, x, y);

    while (isRunning) {
        timer++;
        if (timer >= speed) {
            clearPiece(type, rot, x, y);
            if (!checkCollision(type, rot, x, y + 1)) y++;
            else {
                drawPiece(type, rot, x, y);
                lockPiece(type, rot, x, y);

                playGameSound(0);

                handleClearRows();
                drawBoard();
                drawScore(score);

                x = 5; y = 0;
                type = rand() % 7;
                rot = 0;

                if (checkCollision(type, rot, x, y)) isRunning = false;
            }
            drawPiece(type, rot, x, y);
            timer = 0;
        }
        Sleep(20);
    }

    return 0;
}
