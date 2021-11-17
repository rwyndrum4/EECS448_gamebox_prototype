#ifndef BOARD_H
#define BOARD_H

#include <stdlib.h>
#include <ctime>
#include <iostream>

class board
{
    private:
    char** gameboard = nullptr;
    int** innerboard = nullptr;
    int foodcol,foodrow;
    int orientation = 1;
    int snakeLength = 1;

    public:

    board();
    ~board();

    bool getOrientation(int num);
    //@input - the number of the orientation
    //@process - renew the orientation

    bool print();
    //@process - print the board

    bool food();
    //@process - randomly generate a point of food

    bool isfood(int row, int col);
    //@inpit - get the row and col of the point
    //@process - check if the point is food
    //@return - ture for food, false else

    bool initialSnake();
    //@process - initial the start point of snake


    int move();
    //@process - move the snake with the gotted orientation
    //@return - -1 for boundary or body, 1 for food, 0 for blank, 

    void moveForEmpty();
    //@process - subfunction for the move function

    int getLength();
    //@process - return the length of the snake
    //@return - return the length of the snake

};

#endif