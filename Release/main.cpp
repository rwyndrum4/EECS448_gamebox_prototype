//main.cpp
#include <iostream>
#include "Connect4Driver.h"
#include "cardDriver.h"
#include "snakeDriver.h"
#include "a2048runner.h"
#include "snakeTest.h"
#include "a2048Test.h"

using namespace std;

int main()
{
	int selection;
	do{
		cout<<"Please select a game to play.\nChoose 1 for connect four, 2 for blackjack, 3 for Greedy Snake, 4 for 2048\n"
			<<"5 for Card test suite or enter, 6 for Snake test suite, 7 for 2048 test suite, 8 to quit: ";
		cin>>selection;
		if(selection==1)
		{
  			cout <<"You have selected Connect 4.\n";
  			Connect4Driver myExec;
  			myExec.run();
		}
		else if(selection==2)
		{
			cout<<"You have selected blackjack.\n";
			cardDriver myDriver;
			myDriver.run();
		}
		else if(selection==3)
		{
			cout<<"You have selected Greedy Snake.\n";
			snakeDriver myDriver;
			myDriver.run();
		}
		else if(selection==4)
		{
			cout<<"You have selected 2048.\n";
			a2048runner myDriver;
			myDriver.run();
		}
		else if(selection==5)
		{
			cout<<"You have selected Card Test Suite.\n";
			cardDriver myDriver;
			myDriver.debug();
		}
		else if(selection == 6)
		{
			cout<<"You have selected Snake Test Suite.\n";
			snakeTest myDriver;
			myDriver.run();
		}
		else if (selection == 7)
		{
			cout<<"You have selected 2048 Test Suite.\n";
			a2048Test myDriver;
			myDriver.run();
		}

	}while(selection !=8);

  return 0;
}
