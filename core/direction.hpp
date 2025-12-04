/**
 * @file Direction.hpp
 * @brief Definirea direcțiilor pentru verificarea victoriei în joc.
 * 
 * @project X0Game
 * @author [Vladislav] 
 * @date 2025
 * @version 1.0
 */

/**
 * @brief Enumerație pentru direcțiile de câștig în Tic-Tac-Toe.
 * 
 * Include linii orizontale, verticale și diagonale.
 */
enum class Direction { Horizontal, Vertical, DiagonalMain, DiagonalSecondary };

/**
 * @brief Operator de ieșire pentru afișarea direcției.
 * @param out Fluxul de ieșire.
 * @param d Direcția de afișat.
 * @return Referință la fluxul de ieșire.
 */
std::ostream& operator<<(std::ostream& out, const Direction& d);