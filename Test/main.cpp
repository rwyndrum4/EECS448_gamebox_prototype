//main.cpp
#include <iostream>
#include "Connect4Driver.h"
#include "cardDriver.h"

int main()
{
	int selection;
	do{
		std::cout<<"Please select a game to play.\nChoose 1 for connect four, 2 for a card game, 3 for Greedy Snake or enter 4 to quit: ";
		std::cin>>selection;
		if(selection==1)
		{
  			std::cout <<"You have selected Connect 4.\n";
  			Connect4Driver myExec;
  			myExec.run();
		}
		else if(selection==2)
		{
			cardDriver myDriver;
			myDriver.run();
		}

	}while(selection !=4);

  return 0;
}
