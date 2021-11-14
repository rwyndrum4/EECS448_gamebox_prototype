#include "a2048runner.h"

using namespace std;

#define TTY_PATH            "/dev/tty"
#define STTY_US             "stty raw -echo -F "
#define STTY_DEF            "stty -raw echo -F "

a2048runner::a2048runner()
{

}

a2048runner::~a2048runner()
{

}

void a2048runner::run()
{
    system("clear");
    a2048a game;
    game.generate();
    cout << "Press w/a/s/d to move the numbers. Try your best to get highest score!";
    game.print();
    int orientation = 0;
    keyboardListener event;
    do
    {
        system(STTY_US TTY_PATH);
        orientation = event.get_char();//listen the keyboard
        system(STTY_DEF TTY_PATH);
        if(game.push(orientation))//if push success
        {
            system("clear");
            game.generate();
            game.print();
        }
        else
        {
            system(STTY_DEF TTY_PATH);
        }

    }while (orientation != 113 );

}