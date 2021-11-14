#include <iostream>
#include "cardDriver.h"
#include "blackjack.h"
#include "DeckOfCards.h"
using namespace std;
void cardDriver::run()
{
	cout << "Welcome to the card deck! 1 for deck debugging  2 for blackjack\n";
	int selection = 0;
	cin >> selection;

	if (selection == 1) {
		int userChoice = 0;
		DeckOfCards deck;
		do {
			cout << "\n1) Print dealer hand    2)Print player hand    3)Shuffle    4)Print Pile      5) dealcards to player    6) player to pile     7)dealer to pile     9)Exit\n";
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

			}
			else if (userChoice == 9) {
				break;
			}
			else {
				cout << "bad input\n\n";
			}
		} while (userChoice != 9);
	}
	else if (selection == 2) {
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
}
