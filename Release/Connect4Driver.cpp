//Exec.cpp
#include "Connect4Driver.h"
#include "Connect4.h"
#include "C4board.h"
#include <iostream>

void Connect4Driver::run()
{
        Connect4 mygame;
        mygame.rungame();
}



void Connect4Driver::test()
{

        C4board mytestboard;
        bool opWorks = true;
        std::cout <<"Connect4 Test 1 check if new board is empty: ";
        for(int i=0; i<7; i++)
        {
          for(int j=0; j<6; j++)
          {
            if(mytestboard.what_is(i, j) == '~'){

            }
            else
            {
              opWorks = false;
            }
          }
        }
        if(opWorks == true)
        {
          std::cout <<"PASSED\n";
        }
        else
        {
          std::cout <<"FAILED\n";
        }

        std::cout <<"Connect4 Test 2 place a chip and check if it was placed correctly: ";
        mytestboard.placechip(1,'O');
        if(mytestboard.what_is(1, 0) == 'O'){
          std::cout <<"PASSED\n";
        }
        else
        {
          std::cout <<"FAILED\n";
        }

        std::cout <<"Connect4 Test 3 place a chip out-of-bounds and check if it was prevented from being placed: ";
        if(mytestboard.placechip(100,'O')){
          std::cout <<"FAILED\n";
        }
        else
        {
          std::cout <<"PASSED\n";
        }

        std::cout <<"Connect4 Test 4 check if prevented from stacking chips out-of-bounds: ";
        for(int i=0; i<10; i++)
        {
          mytestboard.placechip(0,'X');
        }
        if(mytestboard.placechip(0,'X')){
          std::cout <<"FAILED\n";
        }
        else
        {
          std::cout <<"PASSED\n";
        }

}
