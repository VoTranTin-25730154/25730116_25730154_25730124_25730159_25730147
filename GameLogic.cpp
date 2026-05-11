#include <fstream>
#include <string>
#include "Common.h"
#include "Tetromino.h"
#include "Render.h"

using namespace std;

void loadHighScore() {
    ifstream file("highscore.txt");
    if (file.is_open()) {
        file >> highScore;
        file.close();
    }
    else highScore = 0;
}
