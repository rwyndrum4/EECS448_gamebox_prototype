//Exec.cpp
#include "Exec.h"
#include "Connect4.h"
#include <iostream>

void Exec::menu()
{
  std::string selection = "0";
  bool validselection = 0;


  do{
    std::cout <<"Select a game to play:\n"
              <<"[1]Game 1 [2]Game 2 [3]Game 3\n";
    std::cin >>selection;

    if(selection=="1")
    {
        validselection=1;
        Connect4 mygame;
        mygame.rungame();
    }
    else if(selection=="2")
    {
        validselection=1;
        std::cout <<"You are playing game 2!\n";
    }
    else if(selection=="3")
    {
        validselection=1;
        std::cout <<"You are playing game 3!\n";
    }
    else
    {
        std::cout <<"not a valid selection\n";
    }
  }while(!validselection);
}
