#ifndef SNAKEDRIVER_H
#define SNAEKDRIVER_H

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





class snakeDriver
{
	public:
	int run();
};

#endif