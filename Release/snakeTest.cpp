#include "snakeTest.h"

using namespace std;

snakeTest::snakeTest()
{

}

snakeTest::~snakeTest()
{
    delete test1;
    delete test6;
}

void snakeTest::run()
{
    if(checkForOrientation())//test1
    {cout << "SNAKE TEST 1: if the input orientation is w, return true : PASSED\n";}
    else
    {cout << "SNAKE TEST 1: if the input orientation is w, return true : FAILURE\n";}
    if(checkForWrongOriebtatation())//test2
    {cout << "SNAKE TEST 2: if the input orientation is 11, return false : PASSED\n";}
    else
    {cout << "SNAKE TEST 2: if the input orientation is 11, return false : FAILURE\n";}
    if(checkForPrint())//test3
    {cout << "SNAKE TEST 3: Success print of the board : PASSED\n";}
    else
    {cout << "SNAKE TEST 3: Success print of the board : FAILURE\n";}
    if(checkForFood())//test4
    {test1->print();cout << "SNAKE TEST 4: Generate food on the board : PASSED\n";}
    else
    {test1->print();cout << "SNAKE TEST 4: Generate food on the board : FAILURE\n";}
    if(checkForInitialSnake())//test5
    {test1->print();cout << "SNAKE TEST 5: Generate the head of Snake : PASSED\n";}
    else
    {test1->print();cout << "SNAKE TEST 5: Generate the head of Snake : FAILURE\n";}
    if(checkForMoveToEmpty())//test6
    {cout << "SNAKE TEST 6: Choose the orientation 'w' and move to a blank : PASSED\n";}
    else
    {cout << "SNAKE TEST 6: Choose the orientation 'w' and move to a blank : FAILURE\n";}
    if(checkForMoveToBoundary())//test7
    {cout << "SNAKE TEST 7: Choose the orientation 'w' and move to the boundary : PASSED\n";}
    else
    {cout << "SNAKE TEST 7: Choose the orientation 'w' and move to the boundary : FAILURE\n";}
    if(checkForGetLength())//test8
    {cout << "SNAKE TEST 8: Initialize the head and return the legth '1' : PASSED\n";}
    else
    {cout << "SNAKE TEST 8: Initialize the head and return the legth '1' : FAILURE\n";}

    
}

bool snakeTest::checkForOrientation()
{
    return(test1->getOrientation(119));
}

bool snakeTest::checkForWrongOriebtatation()
{
    return(!test1->getOrientation(11));
}

bool snakeTest::checkForPrint()
{
    return(test1->print());
}
bool snakeTest::checkForFood()
{
    return(test1->food());
}
bool snakeTest::checkForInitialSnake()
{
    return(test1->initialSnake());
}
bool snakeTest::checkForMoveToEmpty()
{
    test6->initialSnake();
    test6->getOrientation(119);
    if(test6->move() == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool snakeTest::checkForMoveToBoundary()
{
    int tempnum =0;
    do
    {
        tempnum = test6->move();
    }while (tempnum == -1);
    return true;
}

bool snakeTest::checkForGetLength()
{
    if(test6->getLength() == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}