all: X0Game

X0Game: player.o board.o engine.o ui.o symbol.o direction.o main.o
	g++ -o X0Game player.o board.o engine.o ui.o symbol.o direction.o main.o

%.o: %.cpp
	g++ -c $< -o $@

clean:
	rm -f *.o X0Game