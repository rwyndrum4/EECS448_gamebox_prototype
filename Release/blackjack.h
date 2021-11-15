#pragma once
#include"DeckOfCards.h"
#include "Card.h"
class blackjack
{
public:
	DeckOfCards deck;//52 cards initialized for the game
	blackjack();
	~blackjack();

	//@input - none
	//@process - what runs the game
	//@return - none
	void play();

	//@input - none
	//@process - Once player decides to stay, Dealer will hit until above 18 and then determine whether dealer busts or not then returns
	//@return - none
	void checkWin();

	int dealerTotal = 0;
	int playerTotal = 0;
	bool playerbust = false;
	bool dealerbust = false;
	bool gameContinue = true;

	//@input - none
	//@process - checks if playertotal is over 21 and reacts accordingly
	//@return - none
	void checkBust();

	//@input - takes a card object
	//@process - adds card value to int playertotal
	//@return - returns an integer.
	int addValue(Card someCard);

};
