test: main.o keyboardListener.o board.o snakeDriver.o
	g++ -std=c++11 -g -Wall main.o keyboardListener.o board.o snakeDriver.o -o test

main.o : main.cpp snakeDriver.h
	g++ -std=c++11 -g -Wall -c main.cpp

snakeDriver.o: snakeDriver.h snakeDriver.cpp
		g++ -std=c++11 -g -Wall -c snakeDriver.cpp

keyboardListener.o : keyboardListener.cpp
	g++ -std=c++11 -g -Wall -c keyboardListener.cpp

board.o : board.cpp
	g++ -std=c++11 -g -Wall -c board.cpp
	
clean :
	rm *.o test