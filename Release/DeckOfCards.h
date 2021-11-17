#pragma once
#include "Card.h"
#include <vector>
class DeckOfCards
{
private:
public:
	DeckOfCards();
	~DeckOfCards();

	//@input - none
	//@process - prints contents of the DealersHand
	//@return - none
	void printDealerHand();

	//@input - none
	//@process - prints contents of the PlayersHand
	//@return - none
	void printPlayerHand();

	//@input - none
	//@process - Prints the card pile
	//@return - none
	void printPile();

	//@input - none
	//@process - randomizes the order of the DealersHand after its been created
	//@return - none
	void shuffle();

	//@input - int x, amount of cards to deal.
	//@process - moves x amount of cards from DealersHand to PlayersHand.
	//@return - none
	void dealcards(int x);

	//@input - none
	//@process - Moves a single card from player to pile.
	//@return - none
	void playToPile();

	//@input - none
	//@process - Moves a single card from dealer to pile.
	//@return - none
	void dealToPile();



	int DealerHandSize;

	//@input - none
	//@process - none
	//@return - returns int DealersHandSize;
	int getDealerSize();
	int PlayerHandSize;

	//@input - none
	//@process - none
	//@return - returns int PlayerHandSize
	int getPlayerSize();
	int PileSize;

	//@input - none
	//@process - none
	//@return - returns int PileSize
	int getPileSize();

	//@input - int x, location in deck.
	//@process - finds the x index in whichever vector.
	//@return - returns a card object.
	Card getCard(int x);

	std::vector<Card> DealersHand;
	std::vector<Card> PlayersHand;
	std::vector<Card> Pile;

};
