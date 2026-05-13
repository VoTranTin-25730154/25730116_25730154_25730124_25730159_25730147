#include <iostream>
#include <windows.h>
#include "Common.h"
#include "Tetromino.h"

using namespace std;

const int OFFSET_X = 2;
const int OFFSET_Y = 1;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawBoundary() {
    for (int i = 0; i <= (BOARD_WIDTH + 2) * 2 - 1; i++) {
        gotoxy(i, 0); cout << "#";
        gotoxy(i, BOARD_HEIGHT + 1); cout << "#";
    }

    for (int i = 1; i <= BOARD_HEIGHT; i++) {
        gotoxy(0, i); cout << "#";
        gotoxy(1, i); cout << "#";

        gotoxy((BOARD_WIDTH + 1) * 2, i); cout << "#";
        gotoxy((BOARD_WIDTH + 1) * 2 + 1, i); cout << "#";
    }
}

void drawPiece(int type, int rotation, int x, int y) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (TETROMINOES[type][rotation][i][j] == 1) {
                gotoxy((x + j) * 2 + OFFSET_X, y + i + OFFSET_Y);
                cout << "[]";
            }
        }
    }
}

void clearPiece(int type, int rotation, int x, int y) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (TETROMINOES[type][rotation][i][j] == 1) {
                gotoxy((x + j) * 2 + OFFSET_X, y + i + OFFSET_Y);
                cout << "  ";
            }
        }
    }
}

void drawBoard() {
    for (int i = 0; i < BOARD_HEIGHT; i++) {
        for (int j = 0; j < BOARD_WIDTH; j++) {
            gotoxy(j * 2 + OFFSET_X, i + OFFSET_Y);
            if (board[i][j] == 1) {
                cout << "[]";
            }
            else {
                cout << "  ";
            }
        }
    }
}

void drawScore(int score) {
    gotoxy((BOARD_WIDTH + 5) * 2, 5);
    cout << "SCORE: " << score;

    gotoxy((BOARD_WIDTH + 5) * 2, 7);
    cout << "HIGH SCORE: " << highScore;
}

void playGameSound(int type) {
    switch (type) {
    case 0:
        Beep(300, 50); break;
    case 1:
        Beep(800, 50); break;
    case 2:
        Beep(1000, 150); break;
    case 3:
        Beep(1300, 250); break;
    }
}