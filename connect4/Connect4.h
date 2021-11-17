//Connect4.h

#ifndef CONNECT4_H
#define CONNECT4_H

#include <iostream>
#include <exception>
#include "C4board.h"


class Connect4
{
private:
  C4board gameboard;
  int turn;
  bool player1winner;
  bool player2winner;

public:
  Connect4();
  void rungame();
  
};

#endif
