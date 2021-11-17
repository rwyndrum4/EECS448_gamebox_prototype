//C4board.cpp

#include "C4board.h"
#include <iostream>

C4board::C4board() //builds an empty 7 collunms x 6 rows board
{
  m_map = new char*[7]; ///7 wide
  for(int i=0; i<7; i++)
  {
    m_map[i] = new char[6];
  }

  for(int i=0; i<7; i++) //fills board with placeholders
  {
    for(int j=0; j<6; j++)
    {
      m_map[i][j] = '~';
    }
  }

}

C4board::~C4board()
{
  for(int i=0; i<7; i++)
  {
    delete[] m_map[i];
  }
  delete[] m_map;
}

void C4board::printboard()
{
  for(int j=5; j>=0; j--)
  {
    std::cout <<"|";
    for(int i=0; i<7; i++)
    {
      std::cout <<m_map[i][j];
      std::cout <<"|";
    }
    std::cout <<"\n";
  }
  //std::cout <<"Board printed.\n";
}

char C4board::what_is(int column_num, int row_num)
{
  return(m_map[column_num][row_num]);
}

bool C4board::placechip(int column_num, char chip)
{
  if(column_num >= 0 && column_num < 7)
  {
    for(int j=0; j<6; j++)
    {
      if(m_map[column_num][j] == '~')
      {
        m_map[column_num][j]=chip;
        return(true);
      }
    }
    return(false);
  }
  else
  {
    return(false);
  }
}




bool C4board::check4inarow(char chip)
{


  //check horizontal
  for(int j=0; j<6; j++)
  {
    for(int i=0; i<4; i++)
    {
      if((m_map[i][j] == chip) && (m_map[i+1][j] == chip) && (m_map[i+2][j] == chip) && (m_map[i+3][j] == chip))
      {
        return(true);
      }
    }
  }
  //check vertical
  for(int j=0; j<3; j++)
  {
    for(int i=0; i<7; i++)
    {
      if((m_map[i][j] == chip) && (m_map[i][j+1] == chip) && (m_map[i][j+2] == chip) && (m_map[i][j+3] == chip))
      {
        return(true);
      }
    }
  }
  //check / diagonal
  for(int j=0; j<3; j++)
  {
    for(int i=0; i<4; i++)
    {
      if((m_map[i][j] == chip) && (m_map[i+1][j+1] == chip) && (m_map[i+2][j+2] == chip) && (m_map[i+3][j+3] == chip))
      {
        return(true);
      }
    }
  }
  //check \ diagonal
  for(int j=2; j>=0; j--)
  {
    for(int i=3; i<7; i++)
    {
      if((m_map[i][j] == chip) && (m_map[i-1][j+1] == chip) && (m_map[i-2][j+2] == chip) && (m_map[i-3][j+3] == chip))
      {
        return(true);
      }
    }
  }

  return(false);
}
