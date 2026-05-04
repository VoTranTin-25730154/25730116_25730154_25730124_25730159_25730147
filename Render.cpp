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