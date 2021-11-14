#include "DeckOfCards.h"
#include <string>
#include <iostream>
#include <stdio.h>    /* printf, scanf, puts, NULL */
#include <stdlib.h>   /* srand, rand */
#include <time.h>     /* time */
DeckOfCards::DeckOfCards(){
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 13; j++) {
			DealersHand.push_back(Card(i, j));
		}
	}
	DealerHandSize = DealersHand.size();
	PlayerHandSize = 0;
	PileSize = 0;
}

DeckOfCards::~DeckOfCards() {
}

Card DeckOfCards::getCard(int x){
	return (DealersHand.at(x));
}

int DeckOfCards::getDealerSize() {
	DealerHandSize = DealersHand.size();
	return(DealerHandSize);
}

int DeckOfCards::getPlayerSize() {
	PlayerHandSize = PlayersHand.size();
	return(PlayerHandSize);
}

int DeckOfCards::getPileSize()
{
	PileSize = Pile.size();
	return(PileSize);
}

void DeckOfCards::shuffle(){
	DealerHandSize = DealersHand.size();//update size
	srand(time(NULL));
	for (int i = 0; i < DealerHandSize; i++) {
		Card tempswap = DealersHand.at(i);//create a copy of card at i
		int randomSpot = rand() % DealerHandSize;
		DealersHand.at(i) = DealersHand.at(randomSpot);
		DealersHand.at(randomSpot) = tempswap;
	}
}

void DeckOfCards::dealcards(int x) {
	if (DealerHandSize == 0) {
		return;
	}
	for (int i = 0; i < x; i++) {
		int endindex = getDealerSize() - 1;
		Card tempMove = DealersHand.at(endindex);
		PlayersHand.push_back(tempMove);
		DealersHand.pop_back();
		getDealerSize();//update the dealers size
		getPlayerSize();//and player
	}
}

void DeckOfCards::playToPile() {
	if (PlayerHandSize == 0) {
		return;
	}
	int endindex = getPlayerSize() - 1;
	Card tempMove = PlayersHand.at(endindex);
	Pile.push_back(tempMove);
	PlayersHand.pop_back();
	getPileSize();//updates pilesize
	getPlayerSize();//and player
}

void DeckOfCards::dealToPile() {
	if (DealerHandSize == 0) {
		return;
	}
	int endindex = getDealerSize() - 1;
	Card tempMove = DealersHand.at(endindex);
	Pile.push_back(tempMove);
	DealersHand.pop_back();
	getPileSize();//updates pilesize
	getDealerSize();//and dealer
}

void DeckOfCards::printDealerHand() {
	for (int i = 0; i < DealerHandSize; i++) {
		string whichcard = DealersHand.at(i).getInfo();
		std::cout << whichcard << '\n';
	}
}

void DeckOfCards::printPlayerHand() {
	for (int i = 0; i < PlayerHandSize; i++) {
		string whichcard = PlayersHand.at(i).getInfo();
		std::cout << whichcard << '\n';
	}
}

void DeckOfCards::printPile() {
	for (int i = 0; i < PileSize; i++)
	{
		string whichcard = Pile.at(i).getInfo();
		std::cout << whichcard << '\n';
	}
}

