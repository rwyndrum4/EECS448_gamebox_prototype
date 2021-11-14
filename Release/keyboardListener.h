#ifndef KEYBOARDLISTENER_H
#define KEYBOARDLISTENER_H


#include <stdio.h>
#include <stdlib.h>
#include <iostream>


#define TTY_PATH            "/dev/tty"
#define STTY_US             "stty raw -echo -F "
#define STTY_DEF            "stty -raw echo -F "

class keyboardListener
{
    private:


    public:
    keyboardListener ();
    ~keyboardListener ();
    int get_char();
};

#endif