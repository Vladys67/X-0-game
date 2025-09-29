all: X0Game

X0Game: player.o board.o engine.o ui.o symbol.o direction.o main.o
	g++ -o X0Game.exe player.o board.o engine.o ui.o symbol.o direction.o main.o

player.o:
	g++ player.cpp -o player.o -c

board.o:
	g++ board.cpp -o board.o -c

engine.o:
	g++ engine.cpp -o engine.o -c

ui.o:
	g++ ui.cpp -o ui.o -c

symbol.o:
	g++ symbol.cpp -o symbol.o -c

direction.o:
	g++ direction.cpp -o direction.o -c

main.o:
	g++ main.cpp -o main.o -c

clean:
	del /Q *.o *.exe 2>nul
