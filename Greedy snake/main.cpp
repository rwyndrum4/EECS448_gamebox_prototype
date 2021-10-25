#include <iostream>
#include <unistd.h>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include "keyboardListener.h"
#include "board.h"

using namespace std;

#define TTY_PATH            "/dev/tty"
#define STTY_US             "stty raw -echo -F "
#define STTY_DEF            "stty -raw echo -F "



int main()
{
    system("clear");
    board gameboard;
    gameboard.initialSnake();
    gameboard.food();
    gameboard.print();
    int orientation = 0;
    do
    {
        cout << "ENTER w/a/s/d TO START THE GAME\n";
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
            system ("sleep 0.01");
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