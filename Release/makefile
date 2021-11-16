gamebox: main.o Connect4Driver.o Connect4.o C4board.o Card.o blackjack.o DeckOfCards.o cardDriver.o keyboardListener.o board.o snakeDriver.o a2048runner.o square.o a2048a.o snakeTest.o a2048Test.o
	g++ -std=c++11 -g -Wall main.o Connect4Driver.o Connect4.o C4board.o Card.o blackjack.o DeckOfCards.o cardDriver.o keyboardListener.o board.o snakeDriver.o a2048runner.o square.o a2048a.o snakeTest.o a2048Test.o -o gamebox

main.o: main.cpp Connect4Driver.h cardDriver.h snakeDriver.h
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

blackjack.o: blackjack.h blackjack.cpp
	g++ -std=c++11 -g -Wall -c blackjack.cpp

snakeDriver.o: snakeDriver.h snakeDriver.cpp
		g++ -std=c++11 -g -Wall -c snakeDriver.cpp

keyboardListener.o : keyboardListener.cpp
	g++ -std=c++11 -g -Wall -c keyboardListener.cpp

board.o : board.cpp
	g++ -std=c++11 -g -Wall -c board.cpp
a2048runner.o:a2048a.cpp
	g++ -std=c++11 -g -Wall -c a2048runner.cpp 
square.o : square.cpp
	g++ -std=c++11 -g -Wall -c square.cpp
a2048a.o : a2048a.cpp
	g++ -std=c++11 -g -Wall -c a2048a.cpp
snakeTest.o: snakeTest.cpp
	g++ -std=c++11 -g -Wall -c snakeTest.cpp
a2048Test.o: a2048Test.cpp
	g++ -std=c++11 -g -Wall -c a2048Test.cpp

clean:
	rm *.o gamebox
