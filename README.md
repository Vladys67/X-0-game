# X&0 game
## Descriere
Proiectul implementează jocul clasic **X și 0** în C++.  
Doi jucători pun pe rând simbolurile **X** și **O** pe o tablă 3x3. Scopul este să obțină 3 simboluri la rând.

## Regulile jocului
1. Tabla are 3x3 celule.  
2. Jucătorii mută pe rând.  
3. Câștigă primul care are 3 simboluri pe linie, coloană sau diagonală.  
4. Dacă tabla se umple fără câștigător → egalitate.  

## Structuri și clase
- **Cell** (`cell.hpp`) – starea unei celule (`Empty`, `X`, `O`).  
- **Player** (`player.hpp`) – numele și simbolul jucătorului.  
- **Board** (`board.hpp`) – tabla 3x3, gestionează mutările.  
- **Game** (`game.hpp`) – logica jocului (mutări, verificări, ture).  
- **UI** (`ui.hpp`) – afișează tabla și mesajele.  
- **Direction** (`direction.hpp`) – direcțiile de verificare (`Horizontal`, `Vertical`, `DiagonalMain`, `DiagonalSecondary`).  
