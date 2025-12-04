/**
 * @file Symbol.hpp
 * @brief Definirea simbolurilor utilizate în jocul Tic-Tac-Toe (X, O, Empty).
 * 
 * @project X0Game
 * @author [Vladislav] 
 * @date 2025
 * @version 1.0
 */

/**
 * @brief Enumerație pentru simbolurile din joc.
 * 
 * Reprezintă stările celulelor de pe tablă: gol (Empty), X sau O.
 */
enum class Symbol { Empty, X, O };

/**
 * @brief Operator de egalitate pentru Symbol.
 * @param lhs Simbolul stâng.
 * @param rhs Simbolul drept.
 * @return true dacă simbolurile sunt egale, altfel false.
 */
bool operator==(Symbol lhs, Symbol rhs);

/**
 * @brief Operator de inegalitate pentru Symbol.
 * @param lhs Simbolul stâng.
 * @param rhs Simbolul drept.
 * @return true dacă simbolurile sunt diferite, altfel false.
 */
bool operator!=(Symbol lhs, Symbol rhs);

/**
 * @brief Operator de ieșire pentru afișarea simbolului.
 * @param out Fluxul de ieșire.
 * @param s Simbolul de afișat.
 * @return Referință la fluxul de ieșire.
 */
std::ostream& operator<<(std::ostream& out, const Symbol& s);