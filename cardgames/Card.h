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
	Card(int i, int j);
	Card();
	void setFace(string cardFace);
	string getFace();
	void setValue(string cardNumber);
	string getValue();
	string getInfo();
};

