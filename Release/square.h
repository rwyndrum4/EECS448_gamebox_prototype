#ifndef SQUARE_H
#define SQUARE_H

#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <string>

class square 
{
    private:
    int storenum = -1;
    std::string printnum = "";


    public:
    square();
    ~square();
    void putnumber(int num);
    //@process - get the number of

    int getnumber();
    //@return - the number stored

    std::string getstringnumber();
    //@process - return the string from number

    int getlength();
    //@return - get the length of string

    bool combine (square*& box);
    //@process - combine the box with another box
    //@return - true for success


};

#endif