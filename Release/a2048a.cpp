#include "a2048a.h"

using namespace std;

a2048a::a2048a()
{
    boxes=new square*[16]; //generate 16 squares
    for(int i = 0; i<16; i++)
    {
        boxes[i]=new square; //generate 16 boxes
    }
}

a2048a::~a2048a()
{
    for(int i = 0; i<16; i++)
    {
        delete boxes[i];
    }
    delete[] boxes;
}

bool a2048a::print()
{
    score = 0; // show the sore
    for (int i = 0 ; i < 16; i++)
    {
        if(boxes[i]->getnumber()>0) //adding all square's numbers
        {
            score = score + boxes[i]->getnumber();
        }
        else
        {

        }
    }
    cout << "\nScore: "<< score << "         Enter 'q' to quit the game" <<endl; // print the boxes
    cout << " _________   _________   _________   _________\n";
    cout << "|         | |         | |         | |         |\n";
    cout << "|";
    cout << boxes[0]->getstringnumber();
    for (int i = 1; i<10-boxes[0]->getlength(); i++) //print number for each box
    {
        cout <<" ";
    }
    cout << "| |";
    cout << boxes[1]->getstringnumber();
    for (int i = 1; i<10-boxes[1]->getlength(); i++) //print number for each box
    {
        cout <<" ";
    }
    cout << "| |";
    cout << boxes[2]->getstringnumber();
    for (int i = 1; i<10-boxes[2]->getlength(); i++) //print number for each box
    {
        cout <<" ";
    }
    cout << "| |";
    cout << boxes[3]->getstringnumber();
    for (int i = 1; i<10-boxes[3]->getlength(); i++) //print number for each box
    {
        cout <<" ";
    }
    cout << "|\n";
    cout << "|         | |         | |         | |         |\n";
    cout << "|_________| |_________| |_________| |_________|\n";// print the boxes


    cout << " _________   _________   _________   _________\n";
    cout << "|         | |         | |         | |         |\n";
    cout << "|";
    cout << boxes[4]->getstringnumber();
    for (int i = 1; i<10-boxes[4]->getlength(); i++)
    {
        cout <<" ";
    }
    cout << "| |";
    cout << boxes[5]->getstringnumber();
    for (int i = 1; i<10-boxes[5]->getlength(); i++)
    {
        cout <<" ";
    }
    cout << "| |";
    cout << boxes[6]->getstringnumber();
    for (int i = 1; i<10-boxes[6]->getlength(); i++)
    {
        cout <<" ";
    }
    cout << "| |";
    cout << boxes[7]->getstringnumber();
    for (int i = 1; i<10-boxes[7]->getlength(); i++)
    {
        cout <<" ";
    }
    cout << "|\n";
    cout << "|         | |         | |         | |         |\n";
    cout << "|_________| |_________| |_________| |_________|\n";


    cout << " _________   _________   _________   _________\n";
    cout << "|         | |         | |         | |         |\n";
    cout << "|";
    cout << boxes[8]->getstringnumber();
    for (int i = 1; i<10-boxes[8]->getlength(); i++)
    {
        cout <<" ";
    }
    cout << "| |";
    cout << boxes[9]->getstringnumber();
    for (int i = 1; i<10-boxes[9]->getlength(); i++)
    {
        cout <<" ";
    }
    cout << "| |";
    cout << boxes[10]->getstringnumber();
    for (int i = 1; i<10-boxes[10]->getlength(); i++)
    {
        cout <<" ";
    }
    cout << "| |";
    cout << boxes[11]->getstringnumber();
    for (int i = 1; i<10-boxes[11]->getlength(); i++)
    {
        cout <<" ";
    }
    cout << "|\n";
    cout << "|         | |         | |         | |         |\n";
    cout << "|_________| |_________| |_________| |_________|\n";


        cout << " _________   _________   _________   _________\n";
    cout << "|         | |         | |         | |         |\n";
    cout << "|";
    cout << boxes[12]->getstringnumber();
    for (int i = 1; i<10-boxes[12]->getlength(); i++)
    {
        cout <<" ";
    }
    cout << "| |";
    cout << boxes[13]->getstringnumber();
    for (int i = 1; i<10-boxes[13]->getlength(); i++)
    {
        cout <<" ";
    }
    cout << "| |";
    cout << boxes[14]->getstringnumber();
    for (int i = 1; i<10-boxes[14]->getlength(); i++)
    {
        cout <<" ";
    }
    cout << "| |";
    cout << boxes[15]->getstringnumber();
    for (int i = 1; i<10-boxes[15]->getlength(); i++)
    {
        cout <<" ";
    }
    cout << "|\n";
    cout << "|         | |         | |         | |         |\n";
    cout << "|_________| |_________| |_________| |_________|\n";

    return true;

}

bool a2048a::generate()
{

    int location_num = 0;
    if(!checkforempty())//if there is no empty box
    {
        return false;//it will not generate
    }
    do
    {
        location_num = rand() % 16 + 1;
    } while (boxes[location_num-1]->getnumber() != -1); // whilke it is the blank box which shows -1 in int
    boxes[location_num-1]->putnumber(2); //push a number2

    return true;
    
}

bool a2048a::checkforempty()
{
    for (int i = 0; i<16 ; i++)//check 16 boxes
    {
        if (boxes[i]->getnumber() == -1)//check if it is empty
        {return true;} //return true if check empty
    }
    return false;
}
bool a2048a::push(int orientation)
{
    if(orientation == 119) //w
    {
        for(int i = 4 ; i > 1 ; i--)//3 times
        {
            for(int j= 1; j < 4; j++)//2->1 3->2 4->3 (line)
            {
                boxes[4*j]->combine(boxes[4*j-4]);
                boxes[4*j+1]->combine(boxes[4*j+1-4]);
                boxes[4*j+2]->combine(boxes[4*j+2-4]);
                boxes[4*j+3]->combine(boxes[4*j+3-4]);
            }
        }
        return true;
    }
    if(orientation == 97) //a
    {
        for(int i = 4 ; i > 1 ; i--)//3 times
        {
            for(int j=0; j < 3; j++)//2->1 3->2 4->3
            {
                boxes[1+j]->combine(boxes[1+j-1]);
                boxes[5+j]->combine(boxes[5+j-1]);
                boxes[9+j]->combine(boxes[9+j-1]);
                boxes[13+j]->combine(boxes[13+j-1]);
            }
        }
        return true;
    }
    if(orientation == 115) //s
    {
        for(int i = 4 ; i > 1 ; i--)//3 times
        {
            for(int j=2; j >=0 ; j--)//2->1 3->2 4->3
            {
                boxes[4*j]->combine(boxes[4*j+4]);
                boxes[4*j+1]->combine(boxes[4*j+5]);
                boxes[4*j+2]->combine(boxes[4*j+6]);
                boxes[4*j+3]->combine(boxes[4*j+7]);
            }
        }
        return true;
    }
    if(orientation == 100) //d
    {
        for(int i = 4 ; i > 1 ; i--)//3 times
        {
            for(int j=0; j <3; j++)//2->1 3->2 4->3
            {
                boxes[2-j]->combine(boxes[2-j+1]);
                boxes[6-j]->combine(boxes[6-j+1]);
                boxes[10-j]->combine(boxes[10-j+1]);
                boxes[14-j]->combine(boxes[14-j+1]);
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}