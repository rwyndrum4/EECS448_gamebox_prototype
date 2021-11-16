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


  //@input - none
	//@process print the game board to terminal
	//@return - none
  void printboard();

  //@input column_num, postion in column to check; row_num, postion in row to check
	//@process none
	//@return - what char is at m_map[column_num][row_num]
  char what_is(int column_num, int row_num);


  //@input - column_num, what column number a chip is placed at; chip, what players chip is placed
	//@process adds chip to loweds unoccupied postion in the colunm number column_num
	//@return - none
  bool placechip(int column_num, char chip);

  //@input - chip, what players chip is being scanned for
	//@process none
	//@return - returns true if their is four of the designated chip type in a row (vertical, horizontal or diagonal)
  bool check4inarow(char chip);
};

#endif
