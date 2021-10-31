#include "DeckOfCards.h"
#include <string>

DeckOfCards::DeckOfCards(){
	*DealersHand = new Card[DealersHandSize];
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 13; j++) {
			DealersHand[((((i-1) * 13) + j) - 1)] = new Card(i, j);
		}
	}
}

DeckOfCards::~DeckOfCards() {
	*DealersHand = new Card[DealersHandSize];
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 13; j++) {
			delete DealersHand[((((i - 1) * 13) + j) - 1)];
		}
	}
}

Card* DeckOfCards::getDealersHand(){
	return *DealersHand;
}

Card* DeckOfCards::getCard(int x) {
	return (DealersHand[x]);
}
