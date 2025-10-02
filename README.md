README - Laboratorul 2: Jocul meu de X și 0
Prezentarea mea
Am realizat o implementare simplă a jocului clasic de X și 0 în limbajul C++, în cadrul Laboratorului 2. Am continuat din sarcinile anterioare și am dezvoltat totul exclusiv în ramura lab02 a repozitoriului meu GitHub. Am inclus o serie de fișiere sursă (*.cpp) și antet (*.hpp) care definesc clase și structuri esențiale pentru funcționarea jocului, plus un fișier makefile dedicat compilării și asamblării automate a proiectului.
Jocul îmi permite să alternez mutări cu un alt jucător pe o tablă de 3x3, verificând condițiile de victorie sau remiză, și afișând starea curentă a jocului în consolă.
Cerințele mele tehnice
Am folosit următoarele pentru a compila și executa proiectul:

Compilator C++: MinGW-w64 (cu suport pentru g++), pe care l-am adăugat în variabila de mediu PATH.
Sistem de operare: Windows (am verificat pe versiuni recente).
Utilitare: mingw32-make pentru gestionarea build-ului (inclus în instalarea MinGW).
Alte dependențe: Niciuna suplimentară – m-am bazat exclusiv pe biblioteca standard C++ (iostream, string etc.).

Organizarea fișierelor mele
Am structurat proiectul modular pentru o mai bună organizare și reutilizabilitate:

Fișiere Sursă Principale:

main.cpp: Punctul de start al programului, unde am inițializat jocul și am lansat bucla principală.
player.cpp: Am inclus logica pentru clasa Player, inclusiv gestionarea numelui și simbolului jucătorului.
board.cpp: Am implementat clasa Board, responsabilă cu stocarea și manipularea pozițiilor de pe tablă.
engine.cpp: Nucleul jocului (Engine), unde am procesat mutările, verificat câștigătorii și gestionat turele.
ui.cpp: Am gestionat afișarea tablei și a mesajelor pentru utilizator.
symbol.cpp: Am definit enum-ul Symbol pentru simbolurile X, O și gol (EMPTY).
direction.cpp: Am oferit suport pentru direcții (util pentru verificări viitoare de linie/coloană/diagonală).


Fișiere Antet:

*.hpp: Am declarat clasele și structurile pentru fiecare fișier sursă corespunzător (ex.: player.hpp declară constructorul și metodele get/set pentru Player).


Fișier de Construire:

makefile: Am creat un script automatizat care compilează toate sursele și produce executabilul final.



Instrucțiunile mele de Construire
Am asamblat proiectul fie manual, prin comenzi directe g++, fie automat, folosind makefile-ul. Iată detaliile pentru fiecare metodă:
Asamblare Manuală
Pentru a testa compilarea unui fișier izolat (ex.: player.cpp), am folosit g++ cu opțiunea -c pentru a genera doar fișierul obiect:
g++ -c player.cpp -o player.o

Am repetat pentru toate fișierele sursă (main.cpp, player.cpp, board.cpp, engine.cpp, ui.cpp, symbol.cpp, direction.cpp), rezultând fișiere .o individuale.
Apoi, le-am legat într-un executabil unic:
g++ -o X0Game.exe main.o player.o board.o engine.o ui.o symbol.o direction.o

Această abordare mi-a fost utilă pentru depanare pas cu pas.
Asamblare Automată prin Makefile
Makefile-ul mi-a simplificat procesul, definind reguli pentru compilare individuală și legare globală, plus o regulă pentru curățare.

Am deschis terminalul în directorul proiectului (ex.: C:\Users\Admin\OneDrive\Documente\GitHub\X-0-game).

Am executat comanda de build:
mingw32-make


Procesul a generat toate fișierele .o prin g++ -c și a legat rezultatul în X0Game.exe.


Pentru a elimina fișierele generate (util pentru un build curat):
mingw32-make clean



Structura makefile-ului pe care am creat-o este adaptată pentru proiectul meu:
all: X0Game

X0Game: player.o board.o engine.o ui.o symbol.o direction.o main.o
	g++ player.o board.o engine.o ui.o symbol.o direction.o main.o -o X0Game.exe

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

Lansarea Jocului
După finalizarea build-ului, am pornit jocul direct din terminal:
X0Game.exe

