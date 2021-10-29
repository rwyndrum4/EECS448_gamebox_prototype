Dealer: cardDriver.o DeckOfCards.o Card.o main.o
	g++ -std=c++11 -g -Wall cardDriver.o DeckOfCards.o Card.o main.o -o Dealer

main.o: main.cpp cardDriver.h
	g++ -std=c++11 -g -Wall -c main.cpp

cardDriver.o: cardDriver.cpp cardDriver.h DeckOfCards.h
	g++ -std=c++11 -g -Wall -c cardDriver.cpp

DeckOfCards.o: DeckOfCards.cpp DeckOfCards.h
	g++ -std=c++11 -g -Wall -c DeckOfCards.cpp

Card.o: Card.h Card.cpp
	g++ -std=c++11 -g -Wall -c Card.cpp

clean:
	rm *.o Dealer