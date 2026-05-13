#pragma once

void gotoxy(int x, int y);
void drawBoundary();
void drawPiece(int type, int rotation, int x, int y);
void clearPiece(int type, int rotation, int x, int y);
void drawBoard();
void drawScore(int score, int level);
void playGameSound(int type);
