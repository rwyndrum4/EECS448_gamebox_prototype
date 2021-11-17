#include "a2048Test.h"

using namespace std;

a2048Test::a2048Test()
{
    box1 = new square;
    box2 = new square;
    test6 = new a2048a;
}

a2048Test::~a2048Test()
{
    delete box1;
    delete box2;
    delete test6;
}

void a2048Test::run()
{
    if(CheckForBoxInputAndGet())//test1
    {cout << "2048 TEST 1: Input number 1 to box and get number 1 : PASSED\n";}
    else
    {cout << "2048 TEST 1: Input number 1 to box and get number 1 : FAILURE\n";}
    if(CheckFroBoxGetString())//test2
    {cout << "2048 TEST 2: Input number 1 to box and get string number '1' : PASSED\n";}
    else
    {cout << "2048 TEST 2: Input number 1 to box and get steing number '1' : FAILURE\n";}
    if(CheckForGetLength())//test3
    {cout << "2048 TEST 3: Input number 1 to box and get length = 1 : PASSED\n";}
    else
    {cout << "2048 TEST 3: Input number 1 to box and get length = 1 : FAILURE\n";}
    if(CheckForCombineSameNumber())//test4
    {cout << "2048 TEST 4: Input number 1 to box1 and box2, get the number of box2 = 2 : PASSED\n";}
    else
    {cout << "2048 TEST 4: Input number 1 to box1 and box2, get the number of box2 = 2 : FAILURE\n";}
    if(CheckForCombineDifferentNumber())//test5
    {cout << "2048 TEST 5: Input number 1 to box1 and 2 tobox2, get the number of box2 = 2 and box1 =1 : PASSED\n";}
    else
    {cout << "2048 TEST 5: Input number 1 to box1 and 2 to box2, get the number of box2 = 2 and box1 =1 : FAILURE\n";}
    if(CheckForPrint())//test6
    {cout << "2048 TEST 6: Printing whole game board : PASSED\n";}
    else
    {cout << "2048 TEST 6: Printing whole game board : FAILURE\n";}
    if(CheckForGenerate())//test7
    {test6->print();cout << "2048 TEST 7: Generating a number 2 to the board : PASSED\n";}
    else
    {test6->print();cout << "2048 TEST 7: Generating a number 2 to the board : FAILURE\n";}
    if(CheckForCheckEmpty())//test8
    {cout << "2048 TEST 8: Generating a number 2 to the board, Checking if it has empty box : PASSED\n";}
    else
    {cout << "2048 TEST 8: Generating a number 2 to the board, Checking if it has empty box : FAILURE\n";}
    if(CheckForEmptyWhenFull())//test9
    {cout << "2048 TEST 9: Generating 16 number 2 to the board, Checking if it has no empty box : PASSED\n";}
    else
    {cout << "2048 TEST 9: Generating 16 number 2 to the board, Checking if it has no empty box : FAILURE\n";}
    if(CheckForPush())//test10
    {test6->print();cout << "2048 TEST 10: Generating 16 number 2 to the board, Pushing forward the orientation 'w' : PASSED\n";}
    else
    {test6->print();cout << "2048 TEST 10: Generating 16 number 2 to the board, Pushing forward the orientation 'w' : FAILURE\n";}

}

bool a2048Test::CheckForBoxInputAndGet()
{
    box1->putnumber(1);
    if(box1->getnumber() == 1)
    {
        return true;
    }
    else
    {return false;}
}

bool a2048Test::CheckFroBoxGetString()
{
    if(box1->getstringnumber() == "1")
    {return true;}
    else
    {return false;}
}
bool a2048Test::CheckForGetLength()
{
    if(box1->getlength() == 1)
    {return true;}
    else
    {return false;}
}
bool a2048Test::CheckForCombineSameNumber()
{
    box2->putnumber(1);
    box1->combine(box2);
    if(box2->getnumber() == 2)
    {return true;}
    else
    {return false;}
}
bool a2048Test::CheckForCombineDifferentNumber()
{
    box1->putnumber(1);
    box1->combine(box2);
    if(box2->getnumber() == 2 && box1 ->getnumber() == 1)
    {return true;}
    else
    {return false;}
}
bool a2048Test:: CheckForPrint()
{
    if(test6->print())
    {return true;}
    else
    {return false;}
}
bool a2048Test:: CheckForGenerate()
{
    if(test6->generate())
    {return true;}
    else
    {return false;}
}
bool a2048Test::CheckForCheckEmpty()
{
    if(test6->checkforempty())
    {return true;}
    else
    {return false;}
}
bool a2048Test:: CheckForEmptyWhenFull()
{
    for (int i = 0; i<15; i++)
    {
        test6->generate();
    }
    if(!test6->checkforempty())
    {return true;}
    else
    {return false;}
}
bool a2048Test:: CheckForPush()
{
    if(test6->push(119))
    {return true;}
    else
    {return false;}
}
