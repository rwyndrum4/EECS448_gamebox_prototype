gamebox: main.o Connect4Driver.o Connect4.o C4board.o Card.o DeckOfCards.o cardDriver.o
	g++ -std=c++11 -g -Wall main.o Connect4Driver.o Connect4.o C4board.o Card.o DeckOfCards.o cardDriver.o -o gamebox

main.o: main.cpp Connect4Driver.h cardDriver.h
	g++ -std=c++11 -g -Wall -c main.cpp

Connect4Driver.o: Connect4Driver.h Connect4Driver.cpp Connect4.h
	g++ -std=c++11 -g -Wall -c Connect4Driver.cpp

Connect4.o: Connect4.h Connect4.cpp C4board.h
	g++ -std=c++11 -g -Wall -c Connect4.cpp

C4board.o: C4board.h C4board.cpp
	g++ -std=c++11 -g -Wall -c C4board.cpp

cardDriver.o: cardDriver.cpp cardDriver.h DeckOfCards.h
	g++ -std=c++11 -g -Wall -c cardDriver.cpp

DeckOfCards.o: DeckOfCards.cpp DeckOfCards.h
	g++ -std=c++11 -g -Wall -c DeckOfCards.cpp

Card.o: Card.h Card.cpp
	g++ -std=c++11 -g -Wall -c Card.cpp

clean:
	rm *.o gamebox
