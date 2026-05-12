#pragma once
#pragma once

void drawBoundary();
void drawScore(int score);
void drawPiece(int type, int rotation, int x, int y);
void clearPiece(int type, int rotation, int x, int y);
void playGameSound(int type);
void drawBoard();
void gotoxy(int x, int y);
