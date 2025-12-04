/**
 * @file Engine.hpp
 * @brief Clasa principală a motorului de joc.
 * 
 * @project X0Game
 * @author [Vladislav]
 * @date 2025
 * @version 1.0
 */

/**
 * @brief Clasa Engine gestionează logica jocului: mutări, verificări, ture.
 * 
 * Integrează Board, Player și UI.
 */
class Engine {
    private:
        Board _board;                          ///< Instanța tablei.
        Player _player1, _player2;             ///< Jucătorii.
        Symbol _currentTurn;                   ///< Simbolul curent (X sau O).
        std::unique_ptr<AbstractUI> _ui;       ///< Pointer inteligent la UI.
    
    public:
        /**
         * @brief Constructor implicit. Inițializează jucători default și UI.
         */
        Engine();
    
        /**
         * @brief Constructor cu jucători.
         * @param p1 Primul jucător (X).
         * @param p2 Al doilea jucător (O).
         */
        Engine(const Player& p1, const Player& p2);
    
        /**
         * @brief Constructor de copiere.
         * @param o Alt Engine de copiat.
         */
        Engine(const Engine& o);
    
        /**
         * @brief Destructor implicit.
         */
        ~Engine() = default;
    
        /**
         * @brief Operator de asignare.
         * @param o Alt Engine de asignat.
         * @return Referință la this.
         */
        Engine& operator=(const Engine& o);
    
        /**
         * @brief Operator de egalitate.
         * @param o Alt Engine de comparat.
         * @return true dacă toate componentele sunt identice.
         */
        bool operator==(const Engine& o) const;
    
        /**
         * @brief Pornește jocul (buclă principală).
         */
        void Start();
    
        /**
         * @brief Efectuează o mutare.
         * @param r Rând.
         * @param c Coloană.
         * @return true dacă mutarea a reușit.
         */
        bool MakeMove(int r, int c);
    
        /**
         * @brief Verifică victoria pentru un simbol.
         * @param s Simbol de verificat.
         * @return true dacă există linie de 3 simboluri.
         */
        bool CheckWin(Symbol s) const;
    
        /**
         * @brief Verifică egalitate (tablă plină fără învingător).
         * @return true dacă este egal.
         */
        bool IsDraw() const;
    
        /**
         * @brief Schimbă tura (X <-> O).
         */
        void SwitchTurn();
    
        /**
         * @brief Getter pentru tura curentă.
         * @return Simbolul curent.
         */
        Symbol GetTurn() const;
    
        /**
         * @brief Getter pentru tablă (const).
         * @return Referință const la Board.
         */
        const Board& GetBoard() const;
    
        /**
         * @brief Operator de ieșire.
         * @param out Fluxul de ieșire.
         * @param e Engine de afișat.
         * @return Referință la fluxul de ieșire.
         */
        friend std::ostream& operator<<(std::ostream& out, const Engine& e);
    };