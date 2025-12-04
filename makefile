CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./core -I./engine -I./ui
AR = ar rcs

# Surse core (adaugă .hpp dacă e nevoie, dar compilează doar .cpp)
CORE_SRC = core/board.cpp core/player.cpp core/symbol.cpp core/direction.cpp
ENGINE_SRC = engine/engine.cpp
UI_SRC = ui/UI.cpp
MAIN_SRC = main.cpp
TEST_SRC = tests/test_main.cpp

CORE_OBJ = $(CORE_SRC:.cpp=.o)
ENGINE_OBJ = $(ENGINE_SRC:.cpp=.o)
UI_OBJ = $(UI_SRC:.cpp=.o)
MAIN_OBJ = $(MAIN_SRC:.cpp=.o)
TEST_OBJ = $(TEST_SRC:.cpp=.o)

CORE_LIB = libcore.a
ENGINE_LIB = libengine.a
UI_LIB = libui.a
TARGET = X0Game
TEST_TARGET = run_tests

all: $(TARGET)

# Biblioteci
$(CORE_LIB): $(CORE_OBJ)
	$(AR) $(CORE_LIB) $(CORE_OBJ)

$(ENGINE_LIB): $(ENGINE_OBJ)
	$(AR) $(ENGINE_LIB) $(ENGINE_OBJ)

$(UI_LIB): $(UI_OBJ)
	$(AR) $(UI_LIB) $(UI_OBJ)

# Executabil principal
$(TARGET): $(MAIN_OBJ) $(CORE_LIB) $(UI_LIB) $(ENGINE_LIB)
	$(CXX) $(MAIN_OBJ) -L. -lengine -lui -lcore -o $(TARGET)

# Teste
$(TEST_TARGET): $(TEST_OBJ) $(CORE_LIB)
	$(CXX) $(TEST_OBJ) -L. -lcore -o tests/test_runner
	./tests/test_runner

# Compilare obiecte
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Curățare (cross-platform-ish)
clean:
	rm -f core/*.o engine/*.o ui/*.o *.o *.a $(TARGET) tests/*.o tests/test_runner 2>/dev/null || del /Q core\*.o engine\*.o ui\*.o *.o *.a $(TARGET) tests\*.o tests\test_runner 2>nul

# Reguli utile
test: $(TEST_TARGET)
build: all
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean test build run