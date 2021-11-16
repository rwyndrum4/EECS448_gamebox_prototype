#ifndef SNAKETEST_H
#define SNAEETEST_H


#include "board.h"
#include <iostream>


class snakeTest
{
    private:
    board* test1 = new board;
    board* test6 = new board;

    public:
    snakeTest();
    ~snakeTest();

    void run();

    bool checkForOrientation();
    bool checkForWrongOriebtatation();
    bool checkForPrint();
    bool checkForFood();
    bool checkForInitialSnake();
    bool checkForMoveToEmpty();
    bool checkForMoveToBoundary();
    bool checkForGetLength();


};


#endif 