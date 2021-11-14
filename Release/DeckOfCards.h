#pragma once
#include "Card.h"
#include <vector>
class DeckOfCards
{
private:
public:
	DeckOfCards();
	~DeckOfCards();

	void printDealerHand();
	void printPlayerHand();
	void printPile();
	void shuffle();
	void dealcards(int x);
	void playToPile();
	void dealToPile();



	int DealerHandSize;
	int getDealerSize();
	int PlayerHandSize;
	int getPlayerSize();
	int PileSize;
	int getPileSize();

	Card getCard(int x);

	std::vector<Card> DealersHand;
	std::vector<Card> PlayersHand;
	std::vector<Card> Pile;

};

