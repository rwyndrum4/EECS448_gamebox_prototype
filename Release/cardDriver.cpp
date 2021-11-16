#include <iostream>
#include "cardDriver.h"
#include "blackjack.h"
#include "DeckOfCards.h"
using namespace std;
void cardDriver::run()
{
	cout << "Welcome to the card deck!\n";
	char response = '\0';
	bool keepPlaying = true;
	do {
		blackjack newGame;
		newGame.play();
		cout << "Would you like to player another game?(Y/N)\n";
		cin >> response;
			if (response == 'Y' || response == 'y') {
				keepPlaying = true;
			}
			else if (response == 'N' || response == 'n') {
				break;
			}
			else {
				cout << "Invalid response, starting a new game.\n";
			}
		} while (keepPlaying == true);
		cout << "Thanks for playing!\n\n\n\n";
}

void cardDriver::debug(){
		int userChoice = 0;
		DeckOfCards deck;
	do {
		cout << "NOTICE: RUNNING ALL TESTS USES A SEPERATE DECK OF CARDS, 1-7 MANIPULATE THE SAME DECK.\n";
		cout << "\n1) Print dealer hand    2)Print player hand    3)Shuffle    4)Print Pile      5) dealcards to player    6) player to pile     7)dealer to pile   8) Run all tests.  9)Exit\n";
		cin >> userChoice;
		if (userChoice == 1) {
			deck.printDealerHand();
		}
		else if (userChoice == 2) {
			deck.printPlayerHand();
		}
		else if (userChoice == 3) {
			deck.shuffle();
		}
		else if (userChoice == 4) {
			deck.printPile();
		}
		else if (userChoice == 5) {
			cout << "How many cards would you like to deal?\n ";
			int howMany = 0;
			cin >> howMany;
			deck.dealcards(howMany);
			cout << "Done.\n";
		}
		else if (userChoice == 6) {
			deck.playToPile();
		}
		else if (userChoice == 7) {
			deck.dealToPile();
		}
		else if (userChoice == 8) {

			cout << "Running tests on every function.\n";
			test1();
			test2();
			test3();

		}
		else if (userChoice == 9) {
			break;
		}
		else {
			cout << "bad input\n\n";
		}
	} while (userChoice != 9);

}

void cardDriver::test1(){
	cout << "Make sure DeckOfCards' constructor created a full deck(52):\n";
	debugdeck.printDealerHand();
	cout << "\nDeck size: " << debugdeck.getDealerSize() << "\n\n Now shuffle and make sure theres still all cards.\n";
	debugdeck.shuffle();
	debugdeck.printDealerHand();
	cout << "\nDeck size: " << debugdeck.getDealerSize() << "\n";
	if(debugdeck.getDealerSize() == 52){
		cout << "Test1 passed----------------------------------------\n";
		return;
	}
}

void cardDriver::test2(){
	cout << "Deal a card to both player and pile and verify membership\n";
	debugdeck.dealToPile();
	debugdeck.dealcards(1);
	cout << "Pile: ";
	debugdeck.printPile();
	cout << "Player hand: ";
	debugdeck.printPlayerHand();
	cout << "Dealer hand: \n";
	debugdeck.printDealerHand();
	cout << "Dealer hand size: " << debugdeck.getDealerSize() << "\n";
}

void cardDriver::test3(){
	cout << "Ensure that shuffle() works according to the size of the dealershand and does not produce any faults.\n";

	debugdeck.printDealerHand();
	cout << "---------------Shuffling----------------";
	debugdeck.shuffle();
	cout << "\n";
	debugdeck.printDealerHand();
}
