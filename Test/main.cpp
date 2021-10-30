//main.cpp
#include <iostream>
#include "Connect4Driver.h"
#include "cardDriver.h"
#include "snakeDriver.h"

using namespace std;

int main()
{
	int selection;
	do{
		cout<<"Please select a game to play.\nChoose 1 for connect four, 2 for a card game, 3 for Greedy Snake or enter 4 to quit: ";
		cin>>selection;
		if(selection==1)
		{
  			cout <<"You have selected Connect 4.\n";
  			Connect4Driver myExec;
  			myExec.run();
		}
		else if(selection==2)
		{
			cout<<"You have selected card game.\n";
			cardDriver myDriver;
			myDriver.run();
		}
		else if(selection==3)
		{
			cout<<"You have selected Greedy Snake.\n";
			snakeDriver myDriver;
			myDriver.run();
		}

	}while(selection !=4);

  return 0;
}
