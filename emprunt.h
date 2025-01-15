

#include <string>
#include "date.h"

class emprunt {
private:
    date _dateEmprunt;  // Date de l'emprunt
    int _ISBN;          // ISBN du livre emprunté
    std::string _idLecteur;  // Identifiant du lecteur

public:
    // Constructeur
    Emprunt(date dateEmprunt, int ISBN, std::string idLecteur);

    // Getters
    date dateEmprunt() const;
    int ISBN() const;
    std::string idLecteur() const;

    // Setters
    void setDateEmprunt(date dateEmprunt);
    void setISBN(int ISBN);
    void setIdLecteur(std::string idLecteur);
};




