#pragma once
#include <string>
using namespace std;

class Card
{
private:
	string face;
	string value;
	string card;
public:
	//@input - takes i and j from a nested loop
	//@process - Assigns values to 52 empty cards
	Card(int i, int j);
	Card();

	//@input - Takes spades,diamonds,clubs,or hearts
	//@process - sets the card face
	void setFace(string cardFace);

	//@input - none
	//@process - none
	//@return - returns string face
	string getFace();

	//@input - Takes 1-13 based off card value
	//@process - sets card value
	//@return - none
	void setValue(string cardNumber);

	//@input - none
	//@process - none
	//@return - returns card value
	string getValue();

	//@input - none
	//@process - combines face and cardvalue
	//@return - returns card info ex. 5 of Hearts
	string getInfo();
};
