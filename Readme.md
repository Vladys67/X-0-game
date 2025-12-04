# X0Game - Joc Tic-Tac-Toe în C++

## Descrierea Proiectului
Acesta este un joc simplu Tic-Tac-Toe (X și O) implementat în C++17. Jocul suportă doi jucători umani, rulând în consolă. Structura proiectului este modulară: core (date), engine (logică), ui (interfață). Proiectul a fost dezvoltat ca parte a lucrării de laborator pentru familiarizarea cu întreținerea codului, documentația și testarea unitară.

## Declarație de Originalitate
Acest proiect a fost realizat integral de mine, Vladislav, ca student în cadrul cursului de programare C++. Toate componentele (cod sursă, documentație, teste) sunt rezultatul muncii mele personale, bazate pe cerințele laboratorului. Nu am copiat cod sau conținut de la alte surse fără atribuire, și am respectat principiile etice academice. Orice similitudini cu alte proiecte sunt rezultatul implementării standard a algoritmilor de bază pentru Tic-Tac-Toe.

## Reguli Joc
- Jocul se joacă pe o tablă 3x3.
- Jucătorul X începe primul.
- Jucătorii introduc mutări sub formă "r c" (rând 0-2, coloană 0-2).
- Victoria: 3 simboluri aliniate orizontal, vertical sau diagonal.
- Egalitate: Tabla plină fără aliniere.
- Mutări invalide (celulă ocupată) sunt respinse.

## Dependențe
- **Mediu de dezvoltare**: Orice IDE cu suport C++ (VS Code, CLion, g++ pe Linux/Windows).
- **Compilator**: g++ (versiune >= 7, cu suport C++17).
- **Biblioteci terțe**: Niciuna (doar STL: array, iostream, memory, string, algorithm).

## Instrucțiuni de Construire
1. Deschide terminalul în directorul proiectului.
2. Rulează `make` pentru a compila (generează `X0Game` sau executabil).
3. Rulează `./X0Game` (sau `X0Game.exe` pe Windows).
4. Pentru rularea testelor: `make test`.
5. Pentru curățare: `make clean`.
