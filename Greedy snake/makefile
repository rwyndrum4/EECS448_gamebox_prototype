test: main.o keyboardListener.o board.o
	g++ -std=c++11 -g -Wall main.o keyboardListener.o board.o -o test
main.o : main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp
keyboardListener.o : keyboardListener.cpp
	g++ -std=c++11 -g -Wall -c keyboardListener.cpp
board.o : board.cpp
	g++ -std=c++11 -g -Wall -c board.cpp
clean :
	rm *.o test