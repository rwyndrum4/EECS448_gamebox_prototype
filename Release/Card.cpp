#include "Card.h"
#include "iostream"

Card::Card(int i, int j)
{
	/* delete first / to attempt to fix switch case
	if (i == 1) {
		setFace("Spades");
	}
	else if (i == 2) {
		setFace("Hearts");
	}
	else if (i == 3) {
		setFace("Diamonds");
	}
	else if (i == 4) {
		setFace("Clubs");
	}
	else {
		std::cout << "broken\n";
	}
	/*/

	//This switch case deals with setting up card faces and is also haunted
	switch(i){
	case 1:
		setFace("Spades");
		break;
	case 2:
		setFace("Hearts");
		break;
	case 3:
		setFace("Diamonds");
		break;
	case 4:
		setFace("Clubs");
		break;
	}
	//*/
	//This combination deals with cards values
	if (j <= 10 && j >= 1){
		string temp;
		temp = to_string(j);
		setValue(temp);
	}
	else if(j == 11)	{
		setValue("Jack");
	}
	else if (j == 12) {
		setValue("Queen");
	}
	else if (j == 13) {
		setValue("King");
	}
	else
	{
		setValue("Junk");
		std::cout << "Junk Card\n";
	}
	card = value + " of " + face;
	//std::cout << "Card assigned values: " << i << " # of iterations. " << j << " card 1 - 13. " << ((((i - 1) * 13) + j) - 1) << " index in the array. " << card << '\n';
}

Card::Card(){
	std::cout << "empty card created\n";
	this->setFace("Empty");
	this->setValue("Empty");
}

void Card::setFace(string cardFace){
	face = cardFace;
}

string Card::getFace(){
	return face;
}

void Card::setValue(string cardValue){
	value = cardValue;
}

string Card::getValue(){
	return value;
}

string Card::getInfo(){
	return (card);
}
