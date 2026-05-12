#pragma once

bool checkCollision(int type, int rotation, int x, int y);
void loadHighScore();
void lockPiece(int type, int rotation, int x, int y);
void handleClearRows();
void resetBoard();
void saveHighScore();
