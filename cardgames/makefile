Dealer: main.o DeckOfCards.o Card.o
	g++ -std=c++11 -g -Wall main.o DeckOfCards.o Card.o -o Dealer

main.o: main.cpp DeckOfCards.h
	g++ -std=c++11 -g -Wall -c main.cpp

DeckOfCards.o: DeckOfCards.cpp DeckOfCards.h
	g++ -std=c++11 -g -Wall -c DeckOfCards.cpp

Card.o: Card.h Card.cpp
	g++ -std=c++11 -g -Wall -c Card.cpp

clean:
	del *.o Dealer.exe