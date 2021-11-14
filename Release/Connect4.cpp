//Connect4.cpp

#include "Connect4.h"
#include <iostream>

Connect4::Connect4()
{
  turn=0;
  player1winner=false;
  player2winner=false;

}

void Connect4::rungame()
{
  std::string choosencolumn = "0";
  int inputcolumn = 0;
  //std::cout <<"You are playing Connect 4.\n";

  while(player1winner == false && player2winner == false) //while game is in progress
  {
    //if board is full without a winner then end the game
    if(turn==(42))
    {
      break;
    }

    //player turn(get placement input)
    do {
      std::cout <<"Player " <<(turn%2)+1 <<" choose a colunm to place a chip.\n";
      gameboard.printboard();
      std::cin >>choosencolumn;
      system("clear");
    } while(!((choosencolumn == "1") || (choosencolumn == "2") || (choosencolumn == "3") || (choosencolumn == "4") || (choosencolumn == "5") || (choosencolumn == "6") || (choosencolumn == "7")));



    //place chip
    inputcolumn=stoi(choosencolumn)-1;
    if(turn%2 == 0)
    {
      gameboard.placechip(inputcolumn,'X');
    }
    else
    {
      gameboard.placechip(inputcolumn,'O');
    }
    turn++;

    //check for winning board
    player1winner=gameboard.check4inarow('X');
    player2winner=gameboard.check4inarow('O');
  }

  //declar winner
  if(player1winner == true)
  {
    std::cout <<"Player 1 Wins!\n";
    gameboard.printboard();
  }
  else if(player2winner == true)
  {
    std::cout <<"Player 2 Wins!\n";
    gameboard.printboard();
  }
  else
  {
    std::cout <<"No Winner.\n";
    gameboard.printboard();
  }


}
