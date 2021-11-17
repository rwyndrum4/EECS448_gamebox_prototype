#pragma once
#include "Card.h"
class DeckOfCards
{
private:
public:
	int DealersHandSize = 52;
	DeckOfCards();
	~DeckOfCards();
	Card* getDealersHand();
	Card* getCard(int x);
	Card* DealersHand[];
	/*
	To add:
	Shuffle: bogosort
	deal hands();
	player hands;
	updating hands;
	
	
	
	
	*/
};

