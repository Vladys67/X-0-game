# Foldere
CORE = core
ENGINE = engine
UI = ui

# Obiecte
CORE_OBJS = $(CORE)/board.o $(CORE)/symbol.o $(CORE)/direction.o
ENGINE_OBJS = $(ENGINE)/player.o $(ENGINE)/engine.o
UI_OBJS = $(UI)/ui.o

# Biblioteci statice
LIBS = libcore.a libengine.a libui.a

# Executabil
X0GAME = X0Game

# Reguli
all: $(LIBS) main.o
	g++ main.o -L. -lui -lengine -lcore -o $(X0GAME)

libcore.a: $(CORE_OBJS)
	ar rcs $@ $^

libengine.a: $(ENGINE_OBJS)
	ar rcs $@ $^

libui.a: $(UI_OBJS)
	ar rcs $@ $^

%.o: %.cpp
	g++ -c $< -o $@

clean:
	rm -f $(CORE_OBJS) $(ENGINE_OBJS) $(UI_OBJS) $(LIBS) main.o $(X0GAME)
