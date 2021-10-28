#pragma once
#include "Card.h"
class DeckOfCards
{
private:
	Card* DealersHand[52];
public:
	DeckOfCards();
	Card* getDealersHand();
	Card* getCard(int x);
	/*
	To add:
	Shuffle: bogosort
	deal hands();
	player hands;
	updating hands;
	
	
	
	
	*/
};

