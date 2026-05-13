#pragma once

bool checkCollision(int type, int rotation, int x, int y);
void lockPiece(int type, int rotation, int x, int y);
void handleClearRows(int& speed, int& level);
void resetBoard();
void loadHighScore();
void saveHighScore();
void updateDifficulty(int& speed, int& level);
