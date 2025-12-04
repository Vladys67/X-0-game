/**
 * @file Player.hpp
 * @brief Clasa pentru reprezentarea unui jucător în joc.
 * 
 * @project X0Game
 * @author [Vladislav] 
 * @date 2025
 * @version 1.0
 */

 #include <string>

 /**
  * @brief Clasa Player reprezintă un jucător cu nume și simbol asociat.
  * 
  * Gestionează operații de bază precum citire/afisare și comparație.
  */
 class Player {
 private:
     std::string _name;  ///< Numele jucătorului.
     Symbol _symbol;     ///< Simbolul asociat (X sau O).
 
 public:
     /**
      * @brief Constructor implicit.
      * 
      * Inițializează cu valori default: nume "Default", simbol Empty.
      */
     Player();
 
     /**
      * @brief Constructor cu parametri.
      * @param name Numele jucătorului.
      * @param symbol Simbolul asociat.
      */
     Player(const std::string& name, Symbol symbol);
 
     /**
      * @brief Constructor de copiere.
      * @param o Alt Player de copiat.
      */
     Player(const Player& o);
 
     /**
      * @brief Destructor implicit.
      */
     ~Player() = default;
 
     /**
      * @brief Operator de asignare.
      * @param o Alt Player de asignat.
      * @return Referință la this.
      */
     Player& operator=(const Player& o);
 
     /**
      * @brief Operator de egalitate.
      * @param o Alt Player de comparat.
      * @return true dacă numele și simbolul sunt identice.
      */
     bool operator==(const Player& o) const;
 
     /**
      * @brief Getter pentru nume.
      * @return Numele jucătorului.
      */
     std::string GetName() const;
 
     /**
      * @brief Getter pentru simbol.
      * @return Simbolul jucătorului.
      */
     Symbol GetSymbol() const;
 
     /**
      * @brief Operator de intrare.
      * @param in Fluxul de intrare.
      * @param p Player de citit.
      * @return Referință la fluxul de intrare.
      */
     friend std::istream& operator>>(std::istream& in, Player& p);
 
     /**
      * @brief Operator de ieșire.
      * @param out Fluxul de ieșire.
      * @param p Player de afișat.
      * @return Referință la fluxul de ieșire.
      */
     friend std::ostream& operator<<(std::ostream& out, const Player& p);
 };