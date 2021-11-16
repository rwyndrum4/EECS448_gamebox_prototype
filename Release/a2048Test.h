#ifndef A2048TEST_H
#define A2048TEST_H

#include "square.h"
#include "a2048a.h"

class a2048Test
{
    private:
    square* box1;
    square* box2;
    a2048a* test6;

    public:
    a2048Test();
    ~a2048Test();
    void run();
    bool CheckForBoxInputAndGet();
    bool CheckFroBoxGetString();
    bool CheckForGetLength();
    bool CheckForCombineSameNumber();
    bool CheckForCombineDifferentNumber();
    bool CheckForPrint();
    bool CheckForGenerate();
    bool CheckForCheckEmpty();
    bool CheckForEmptyWhenFull();
    bool CheckForPush();

};

#endif