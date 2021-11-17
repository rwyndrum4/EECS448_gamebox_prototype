#include <iostream>
#include "keyboardListener.h"
#include "board.h"
#include "snakeDriver.h"
#include <string>



int snakeDriver::run()
{
    system("clear");
    board gameboard;
    gameboard.initialSnake();
    gameboard.food();
    gameboard.print();
    cout << "Welcome to Greddy Snake.\n";
        cout << "Either hitting a wall or eating yourself will result in failure.\n";
		cout << "To win the game the snake needs to cover every square of the board.\n";
        cout << "Try your best to hold out to the end.\n";
        cout << "ENTER w/a/s/d TO START THE GAME\n";
    int orientation = 0;

    do
    {
        orientation = getchar();
        gameboard.getOrientation(orientation);
    }while (orientation != 119 && orientation != 97 && orientation != 100 && orientation != 115);


    keyboardListener event;
    
    while (1)
    {
        int tempOrientation = 0;
        system("clear");
        gameboard.print();
        system(STTY_US TTY_PATH);
        for (int i = 0; i < 100; i++)
        {
            tempOrientation = event.get_char();
            if(tempOrientation != 0)
            {
                orientation = tempOrientation;
            }
            system ("sleep 0.006");
        }
        
        gameboard.getOrientation(orientation);

        int status = gameboard.move();
        if(status == 0)
        {
        }
        else if (status == 1)
        {
            if(gameboard.getLength() == 684)
            {
                cout << "YOU WIN!!!\n";
                system(STTY_DEF TTY_PATH);
                return 0;
            }
            gameboard.food();
        }
        else
        {
            
            system(STTY_DEF TTY_PATH);
            return 0;
        }
        system(STTY_DEF TTY_PATH);
    }
    
    

    return 0 ;
}