//C4board.h

#ifndef C4BOARD_H
#define C4BOARD_H

#include <iostream>
#include <exception>


class C4board
{
private:
  char** m_map = nullptr;

public:
  C4board(); //builds an empty 7 collunms x 6 rows board
  ~C4board();
  void printboard(); //print the game board to terminal
  char what_is(int column_num, int row_num); //returns what is at a location in the board
  bool placechip(int column_num, char chip); //places a chip in the board
  bool check4inarow(char chip); //checks if there are 4 in a row of chip in the board
};

#endif
