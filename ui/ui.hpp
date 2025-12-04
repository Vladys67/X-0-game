/**
 * @file UI.hpp
 * @brief Implementare concretă a UI-ului pentru consolă.
 * 
 * @project X0Game
 * @author [Vladislav] 
 * @date 2025
 * @version 1.0
 */

/**
 * @brief Clasa UI implementează AbstractUI pentru ieșire în consolă.
 */
class UI : public AbstractUI {
    public:
        /**
         * @brief Afișează tabla în consolă (folosește operator<<).
         * @param b Board de afișat.
         */
        void ShowBoard(const Board& b) override;
    
        /**
         * @brief Afișează mesajul în consolă cu newline.
         * @param m Mesajul de afișat.
         */
        void ShowMessage(const std::string& m) override;
    };