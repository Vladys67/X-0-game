CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./core -I./engine -I./ui
AR = ar rcs

CORE_SRC = core/board.cpp core/player.cpp core/symbol.cpp core/direction.cpp
ENGINE_SRC = engine/engine.cpp
UI_SRC = ui/UI.cpp
MAIN_SRC = main.cpp

CORE_OBJ = $(CORE_SRC:.cpp=.o)
ENGINE_OBJ = $(ENGINE_SRC:.cpp=.o)
UI_OBJ = $(UI_SRC:.cpp=.o)
MAIN_OBJ = $(MAIN_SRC:.cpp=.o)

CORE_LIB = libcore.a
ENGINE_LIB = libengine.a
UI_LIB = libui.a

TARGET = X0Game.exe

all: $(TARGET)

$(CORE_LIB): $(CORE_OBJ)
	$(AR) $(CORE_LIB) $(CORE_OBJ)

$(ENGINE_LIB): $(ENGINE_OBJ)
	$(AR) $(ENGINE_LIB) $(ENGINE_OBJ)

$(UI_LIB): $(UI_OBJ)
	$(AR) $(UI_LIB) $(UI_OBJ)

$(TARGET): $(MAIN_OBJ) $(CORE_LIB) $(UI_LIB) $(ENGINE_LIB)
	$(CXX) $(MAIN_OBJ) -L. -lengine -lui -lcore -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /Q core\*.o 2>nul || true
	del /Q engine\*.o 2>nul || true
	del /Q ui\*.o 2>nul || true
	del /Q *.o 2>nul || true
	del /Q *.a 2>nul || true
	del /Q $(TARGET) 2>nul || true

.PHONY: all clean