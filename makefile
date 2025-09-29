all:X-0-Game
X0Game: player.o board.o engine.o ui.o direction.o main.o
	g++ -o X0Game.exe player.o board.o engine.o ui.o symbol.o direction.o main.o

player.o:
	g++ Player.cpp -o player.o -c

board.o:
	g++ Board.cpp -o board.o -c

engine.o:
	g++ Engine.cpp -o engine.o -c

ui.o:
	g++ UI.cpp -o ui.o -c
symbol.o:
	g++ Symbol.cpp -o symbol.o -c
direction.o:
	g++ Direction.cpp -o direction.o -c

main.o:
	g++ main.cpp -o main.o -c

clean:
	rm -f *.o *.exe
