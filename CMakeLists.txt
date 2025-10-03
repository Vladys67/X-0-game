cmake_minimum_required(VERSION 3.10)
project(X0Game)
set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_STANDARD_REQUIRED True)
# include_directories(include) # Calea către fișierele header
# link_directories(lib)        # Calea către bibliotecile externe (folosește doar dacă este necesar)

file(GLOB SOURCES "*.cpp") # Colectează automat toate fișierele .cpp din src
add_executable(X0GAME ${SOURCES})

# target_link_libraries(Snake love math) # Leagă bibliotecile