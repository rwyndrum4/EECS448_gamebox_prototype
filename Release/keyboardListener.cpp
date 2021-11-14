#include "keyboardListener.h"

keyboardListener::keyboardListener()
{

}

keyboardListener::~keyboardListener()
{

}

int keyboardListener::get_char()
{
    fd_set rfds;
    struct timeval tv;
    int ch = 0;
 
    FD_ZERO(&rfds);
    FD_SET(0, &rfds);
    tv.tv_sec = 0;
    tv.tv_usec = 0.1; //set for over time
 
    //check if it has input of keyboard
    if (select(1, &rfds, NULL, NULL, &tv) > 0){
        ch = getchar(); 
    }
    else
    {
        return 0;
    }

}