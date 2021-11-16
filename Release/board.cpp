#include "board.h"

using namespace std;

board :: board() // initialzie the board with size 10
{
    gameboard = new char*[20]; //initialize the game board size
    for(int i = 0; i < 20; i++)
    {
        gameboard[i]=new char[40];
    }

    for (int i = 0 ; i < 20 ; i++) // initialize the hole game board
    {
        for (int j=0; j < 40 ; j++)
        {
            gameboard[i][j] = ' ';
        }
    }

    innerboard = new int*[20]; //initialize the inner board size
    for(int i = 0; i < 20; i++)
    {
        innerboard[i]=new int[40];
    }

    for (int i = 0 ; i < 20 ; i++) // initialize the hole inner board
    {
        for (int j=0; j < 40 ; j++)
        {
            innerboard[i][j] = 0;
        }
    }
    
    for (int i = 0 ; i < 40 ; i ++) // initialize the boundary
    {
        gameboard[0][i] = '#';
        gameboard[19][i] = '#';
        innerboard[0][i] = -1;
        innerboard[19][i] = -1;
    }
    for (int i = 0 ; i < 20 ; i ++) // initialize the boundary
    {
        gameboard[i][0] = '#';
        gameboard[i][39] = '#';
        innerboard[i][0] = -1;
        innerboard[i][39] = -1;
    }

}

board :: ~board()
{
    for(int i = 0; i < 20; i++) //delete each row's column
    {
        delete[] gameboard[i];
    }
    delete[] gameboard;

    for(int i = 0; i < 20; i++) //delete each row's column
    {
        delete[] innerboard[i];
    }
    delete[] innerboard;

}

bool board:: getOrientation(int num)
{
    if (num == 119) //w
    {
        orientation = 1;
        return true;
    }
    else if (num == 97)//a
    {
        orientation = 4;
        return true;
    }
    else if (num == 100)//d
    {
        orientation = 3;
        return true;
    }
    else if (num == 115)//s
    {
        orientation = 2;
        return true;
    }
    else
    {
        return false;
    }

}

bool board:: print()
{
    for (int i = 0 ; i < 20 ; i++)
    {
        for (int j=0; j < 40 ; j++)
        {
            if (i == foodcol && j == foodrow)
            {
                cout <<'*'; // while it is the food
            }
            else if(innerboard[i][j] == snakeLength)//while it is the head
            {
                cout <<"@";
            }
            else if (innerboard[i][j] != 0 && innerboard[i][j] != -1 && innerboard[i][j] != 999)//while it is the body
            {
                cout << "o";
            }
            else
            {
                cout << gameboard[i][j];
            }
        }
        cout << endl;
    }

    return true;

}

bool board:: food()
{
    do
    {
        srand((unsigned) time(0)); 
        foodcol = 1 + (rand() % 18); //get random number for col
        foodrow = 1 + (rand() % 38); //get random number for row
    } while (innerboard[foodcol][foodrow] != 0); // whilke it isn't the blank space
    innerboard[foodcol][foodrow] = 999; // innerboard's food point

    return true;
    

}

bool board:: isfood(int row, int col)
{
    if (row == foodrow && col == foodcol)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool board:: initialSnake()
{
    innerboard[9][19] = 1; // the starter point of the snake
    return true;
}

int board :: move ()
{
     for (int i = 0 ; i < 20 ; i++) // initialize the hole inner board
    {
        for (int j=0; j < 40 ; j++)
        {
            if (innerboard[i][j] == snakeLength)
            {
                if (orientation == 1) //up
                {
                    if(innerboard[i-1][j] == -1) //if it is the boundary
                    {
                        
                        cout << "YOU HIT THE BOUNDARY!!\n";
                        return -1;
                    }
                    else if (innerboard[i-1][j] == 999 )//if it is the food
                    {
                        snakeLength++;
                        innerboard[i-1][j] = snakeLength;
                        return 1;
                    }
                    else if(innerboard[i-1][j] == 0 ) // if it is the empty blank
                    {
                        moveForEmpty();
                        innerboard[i-1][j] = snakeLength;
                        return 0;
                    }
                    else // if it is the body
                    {
                        
                        cout << "YOU ATE YOURSELF\n";
                        return -1;
                    }
                
                }
                else if (orientation == 2) //down
                {
                    if(innerboard[i+1][j] == -1) //if it is the boundary
                    {
                        
                        cout << "YOU HIT THE BOUNDARY!!\n";
                        return -1;
                    }
                    else if (innerboard[i+1][j] == 999 )//if it is the food
                    {
                        snakeLength++;
                        innerboard[i+1][j] = snakeLength;
                        return 1;
                    }
                    else if(innerboard[i+1][j] == 0 ) // if it is the empty blank
                    {
                        moveForEmpty();
                        innerboard[i+1][j] = snakeLength;
                        return 0;
                    }
                    else // if it is the body
                    {
                        
                        cout << "YOU ATE YOURSELFn\n";
                        return -1;
                    }
                
                }
                else if (orientation == 3) //right
                {
                    if(innerboard[i][j+1] == -1) //if it is the boundary
                    {
                        
                        cout << "YOU HIT THE BOUNDARY!!\n";
                        return -1;
                    }
                    else if (innerboard[i][j+1] == 999 )//if it is the food
                    {
                        snakeLength++;
                        innerboard[i][j+1] = snakeLength;
                        return 1;
                    }
                    else if(innerboard[i][j+1] == 0 ) // if it is the empty blank
                    {
                        moveForEmpty();
                        innerboard[i][j+1] = snakeLength;
                        return 0;
                    }
                    else // if it is the body
                    {
                        
                        cout << "YOU ATE YOURSELFn\n";
                        return -1;
                    }
                
                }
                else //left
                {
                    if(innerboard[i][j-1] == -1) //if it is the boundary
                    {
                        
                        cout << "YOU HIT THE BOUNDARY!!\n";
                        return -1;
                    }
                    else if (innerboard[i][j-1] == 999 )//if it is the food
                    {
                        snakeLength++;
                        innerboard[i][j-1] = snakeLength;
                        return 1;
                    }
                    else if(innerboard[i][j-1] == 0 ) // if it is the empty blank
                    {
                        moveForEmpty();
                        innerboard[i][j-1] = snakeLength;
                        return 0;
                    }
                    else // if it is the body
                    {
                        
                        cout << "YOU ATE YOURSELFn\n";
                        return -1;
                    }
                
                }
                
            }
        }
    }
    return 0;
}

void board:: moveForEmpty()
{
     for (int i = 0 ; i < 20 ; i++)
    {
        for (int j=0; j < 40 ; j++)
        {
            if (innerboard[i][j] != 0 && innerboard[i][j] != -1 && innerboard[i][j] != 999)
            {
                innerboard[i][j] --;
            }
        }
    }
}

int board:: getLength()
{
    return snakeLength;
}