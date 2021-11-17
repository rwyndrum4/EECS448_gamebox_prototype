#ifndef A2048A_H
#define A2048A_H


#include "square.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>

class a2048a
{
    private:
    int score = 0;
    square** boxes = nullptr;
    
    public:
    a2048a();
    ~a2048a();

    bool print();
    //@process - print the map of 2048

    bool generate();
    //@process - generate a number 2 to random square
    //@return true if success 

    bool checkforempty();
    //@process - check if there is an empty square
    //@return true if there is 

    bool push(int orientation);
    //@input - get orientation for pushing
    //@process - move the squares lyers by lyers
    //@return true for success

};

#endif
