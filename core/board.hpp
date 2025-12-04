/**
 * @file Board.hpp
 * @brief Clasa pentru reprezentarea tablei de joc Tic-Tac-Toe (3x3).
 * 
 * @project X0Game
 * @author [Vladislav] 
 * @date 2025
 * @version 1.0
 */

 #include <array>

 /**
  * @brief Clasa Board gestionează o matrice 3x3 de simboluri.
  * 
  * Suportă plasare simboluri, verificări de plin/victorie, citire/afisare.
  */
 class Board {
 private:
     std::array<std::array<Symbol, 3>, 3> _grid{};  ///< Matricea interioară a tablei.
 
 public:
     /**
      * @brief Constructor implicit. Apel implicit Clear().
      */
     Board();
 
     /**
      * @brief Constructor de copiere.
      * @param o Alt Board de copiat.
      */
     Board(const Board& o);
 
     /**
      * @brief Constructor din array 2D.
      * @param g Array de simboluri 3x3.
      */
     Board(Symbol g[3][3]);
 
     /**
      * @brief Destructor implicit.
      */
     ~Board() = default;
 
     /**
      * @brief Operator de asignare.
      * @param o Alt Board de asignat.
      * @return Referință la this.
      */
     Board& operator=(const Board& o);
 
     /**
      * @brief Operator de egalitate.
      * @param o Alt Board de comparat.
      * @return true dacă matricile sunt identice.
      */
     bool operator==(const Board& o) const;
 
     /**
      * @brief Plasează un simbol dacă celula e goală.
      * @param r Rând (0-2).
      * @param c Coloană (0-2).
      * @param s Simbol de plasat.
      * @return true dacă plasarea a reușit.
      */
     bool PlaceSymbol(int r, int c, Symbol s);
 
     /**
      * @brief Getter pentru celulă.
      * @param r Rând.
      * @param c Coloană.
      * @return Simbolul din celulă.
      */
     Symbol GetCell(int r, int c) const;
 
     /**
      * @brief Verifică dacă tabla este plină.
      * @return true dacă toate celulele sunt ocupate.
      */
     bool IsFull() const;
 
     /**
      * @brief Șterge toate simbolurile (setează Empty).
      */
     void Clear();
 
     /**
      * @brief Operator de intrare.
      * @param in Fluxul de intrare.
      * @param b Board de citit.
      * @return Referință la fluxul de intrare.
      */
     friend std::istream& operator>>(std::istream& in, Board& b);
 
     /**
      * @brief Operator de ieșire.
      * @param out Fluxul de ieșire.
      * @param b Board de afișat.
      * @return Referință la fluxul de ieșire.
      */
     friend std::ostream& operator<<(std::ostream& out, const Board& b);
 };