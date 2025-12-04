/**
 * @file AbstractUI.hpp
 * @brief Interfață abstractă pentru UI-ul jocului.
 * 
 * @project X0Game
 * @author [Vladislav] 
 * @date 2025
 * @version 1.0
 */

/**
 * @brief Clasa abstractă AbstractUI definește interfața pentru afișarea jocului.
 * 
 * Permite implementări diferite (console, GUI etc.).
 */
class AbstractUI {
    public:
        /**
         * @brief Destructor virtual.
         */
        virtual ~AbstractUI() = default;
    
        /**
         * @brief Afișează tabla de joc.
         * @param b Board de afișat.
         */
        virtual void ShowBoard(const Board& b) = 0;
    
        /**
         * @brief Afișează un mesaj.
         * @param m Mesajul de afișat.
         */
        virtual void ShowMessage(const std::string& m) = 0;
    };