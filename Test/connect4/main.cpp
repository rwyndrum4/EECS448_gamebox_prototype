//main.cpp
#include <iostream>
#include "Connect4Driver.h"

int main()
{
	int selection;
	do{
		std::cout<<"Please select a game to play \n. Choose 1 for connect four, 2 for a card game, 3 for Greedy Snake or enter 4 to quit: ";
		std::cin>>selection;
		if(selection==1)
		{
  			std::cout <<"You have selected Connect 4.";
  			Connect4Driver myExec;
  			myExec.menu();
		}
		else if(selection==2)
		{

		}

	}while(selection !=4);

  return 0;
}
