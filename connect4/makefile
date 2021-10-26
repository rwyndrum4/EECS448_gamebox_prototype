gamebox: main.o Exec.o Connect4.o C4board.o
	g++ -std=c++11 -g -Wall main.o Exec.o Connect4.o C4board.o -o gamebox

main.o: main.cpp Exec.h
	g++ -std=c++11 -g -Wall -c main.cpp

Exec.o: Exec.h Exec.cpp Connect4.h
	g++ -std=c++11 -g -Wall -c Exec.cpp

Connect4.o: Connect4.h Connect4.cpp C4board.h
	g++ -std=c++11 -g -Wall -c Connect4.cpp

C4board.o: C4board.h C4board.cpp
	g++ -std=c++11 -g -Wall -c C4board.cpp

clean:
	rm *.o gamebox
