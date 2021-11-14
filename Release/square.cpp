#include "square.h"

using namespace std;

square::square()
{

}

square::~square()
{

}

void square::putnumber(int num)
{
    if (num == -1)
    {
        storenum = num;
        printnum = "";
    }
    else
    {
        storenum = num;
        printnum = to_string(num);
    }
    
}

int square::getnumber()
{
    return storenum;
}

string square::getstringnumber()
{
    return printnum;
}

int square::getlength()
{
    return (printnum.length());
}


bool square::combine (square*& box)
{
    if(box->getnumber() == -1) // if it is empty
    {
        box->putnumber(storenum);
        putnumber(-1);
        return true;
    }
    else if (box->getnumber() == storenum ) //if  they have same number
    {
        box->putnumber(2 * storenum);
        putnumber(-1);
        return true;
    }
    else
    {
        return false;
    }
}