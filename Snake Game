#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
    nTail = 0;
}

void Draw() {
    system("cls");

    // Top border
    for (int i = 0; i < width + 4; i++) cout << "=";
    cout << endl;

    for (int i = 0; i < height; i++) {
        cout << "||";  // Left border

        for (int j = 0; j < width; j++) {
            if (i == y && j == x)
                cout << "~";  // Snake head
            else if (i == fruitY && j == fruitX)
                cout << "*";  // Fruit symbol
            else {
                bool printTail = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "=";  // Snake body
                        printTail = true;
                        break;
                    }
                }
                if (!printTail)
                    cout << " ";
            }
        }

        cout << "||" << endl;  // Right border
    }

    // Bottom border
    for (int i = 0; i < width + 4; i++) cout << "=";
    cout << endl;

    cout << "Score: " << score << endl;
    cout << "Controls: 8=Up, 2=Down, 4=Left, 6=Right, X=Exit\n";
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case '4':  // Left
                if (dir != RIGHT) dir = LEFT;
                break;
            case '6':  // Right
                if (dir != LEFT) dir = RIGHT;
                break;
            case '8':  // Up
                if (dir != DOWN) dir = UP;
                break;
            case '2':  // Down
                if (dir != UP) dir = DOWN;
                break;
            case 'x':
            case 'X':
                gameOver = true;
                break;
        }
    }
}

void Logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;

    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch(dir) {
        case LEFT: x--; break;
        case RIGHT: x++; break;
        case UP: y--; break;
        case DOWN: y++; break;
        default: break;
    }

    // If snake hits the wall => game over
    if (x < 0 || x >= width || y < 0 || y >= height) {
        gameOver = true;
    }

    // Check collision with tail
    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;
    }

    // Eating fruit
    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}

int main() {
    Setup();

    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100);
    }

    cout << "Game Over!" << endl;
    cout << "Final Score: " << score << endl;

    return 0;
}
