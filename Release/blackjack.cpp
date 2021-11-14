#include "blackjack.h"
#include <iostream>

blackjack::blackjack() {
	deck.shuffle();
}

blackjack::~blackjack() {

}

void blackjack::play() {
	std::cout << "\nWelcome to BlackJack, know that Ace is always low\nShuffling deck...\n\n\n";
	int moveselect = 0;

	//deals the initial 2 cards and adds them to playertotal.
	deck.dealcards(1);
	playerTotal = playerTotal + addValue(deck.PlayersHand.back());
	deck.dealcards(1);
	playerTotal = playerTotal + addValue(deck.PlayersHand.back());
	
	//gives the dealer his 2 cards.
	deck.dealToPile();
	dealerTotal = dealerTotal + addValue(deck.Pile.back());
	deck.dealToPile();
	dealerTotal = dealerTotal + addValue(deck.Pile.back());
	do {
		std::cout << "Your Cards:\n";
		deck.printPlayerHand();
		std::cout << "\nDealer is showing: " << deck.Pile.front().getInfo() << "\n\n"; //shows the dealers top card.
		std::cout << "Would you like to hit or stay?(1/2): ";
		if (playerTotal == 21) {
			moveselect = 2;
		}
		else {
			std::cin >> moveselect;
		}
		if (moveselect == 1) {
			deck.dealcards(1);
			cout << "You drew: " << deck.PlayersHand.back().getInfo() << "\n\n";
			playerTotal = playerTotal + addValue(deck.PlayersHand.back());
			checkBust();
			if (playerTotal > 21) {
				gameContinue = false;
				continue;
			}
		}
		else if (moveselect == 2) {
			gameContinue = false;
			checkWin();
			continue;
		}

		std::cout << "Player total: " << playerTotal << '\n';

	} while(gameContinue == true);
	if (playerTotal > 21) {
		cout << "\nPlayer busted with a total of: " << playerTotal << '\n';
		return;
	}
	else if (playerTotal <= 21 && playerTotal > dealerTotal){
		cout << "\nYou win!\n";
		return;
	}
	else if (dealerTotal > 21) {
		cout << "\nDealer Bust!\n";
		return;
	}
	else if (dealerTotal <= 21 && dealerTotal > playerTotal){
		cout << "\nYou lost.\nDealer total: " << dealerTotal << "\nPlayer total: " << playerTotal << "\n";
		return;
	}
	else if (dealerTotal == 21 && playerTotal == 21)
	{
		cout << "\nDraw!\n";
		return;
	}
	else {
		cout << "\n\n fix something because all cases should be covered \n\n";
	}
}

void blackjack::checkWin() { //dealer plays until win or bust.
	if (dealerTotal < 18) {
		cout << "\nDealer total: " << dealerTotal << "\nPlayer total: " << playerTotal << '\n';
		deck.dealToPile();
		dealerTotal = dealerTotal + addValue(deck.Pile.back());
		cout << "\nDealer draws: " << deck.Pile.back().getInfo() << "\nDealer hand: \n";
		deck.printPile();
		cout << "\n";
	}
	if (dealerTotal > 21) {
		dealerbust = true;
		return;
	}
	if (dealerTotal < 18){
		checkWin();
	}
	else {
		return;
	}
}

void blackjack::checkBust() { //check that the player didn't bust
	if (playerTotal == 21) {
		cout << "\nBlackjack!\nThe dealer must match or bust.\n";
		playerbust = false;
	}
	else if (playerTotal > 21) {
		cout << "\nBust!\n";
		playerbust = true;
	}
	else {
		playerbust = false;
	}
}

int blackjack::addValue(Card somecard){
	string whichCard = somecard.getValue();
	int toAdd = 0;
	if (whichCard == "1") {
		toAdd = toAdd + 1;
	}
	else if (whichCard == "2") {
		toAdd = toAdd + 2;
	}
	else if (whichCard == "3") {
		toAdd = toAdd + 3;
	}
	else if (whichCard == "4") {
		toAdd = toAdd + 4;
	}
	else if (whichCard == "5") {
		toAdd = toAdd + 5;
	}
	else if (whichCard == "6") {
		toAdd = toAdd + 6;
	}
	else if (whichCard == "7") {
		toAdd = toAdd + 7;
	}
	else if (whichCard == "8") {
		toAdd = toAdd + 8;
	}
	else if (whichCard == "9") {
		toAdd = toAdd + 9;
	}
	else if (whichCard == "10") {
		toAdd = toAdd + 10;
	}
	else if (whichCard == "Jack") {
		toAdd = toAdd + 10;
	}
	else if (whichCard == "Queen") {
		toAdd = toAdd + 10;
	}
	else if (whichCard == "King") {
		toAdd = toAdd + 10;
	}
	return(toAdd);
}