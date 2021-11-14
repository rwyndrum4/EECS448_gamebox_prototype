#pragma once
#include"DeckOfCards.h"
#include "Card.h"
class blackjack
{
public:
	DeckOfCards deck;
	blackjack();
	~blackjack();
	void play();
	void checkWin();
	int dealerTotal = 0;
	int playerTotal = 0;
	bool playerbust = false;
	bool dealerbust = false;
	bool gameContinue = true;
	void checkBust();
	int addValue(Card someCard);

};
