#include"date.h"

class auteur {
    private:
    int _identifiant;
    std::string _nom;
    std::string  _prenom;
    date _daten;
    public:
    auteur(int id,std::string n,std::string pr,date d);
    int identifiant() const;
    std::string nom() const;
    std::string prenom() const;
    date daten() const;

    void setidentifiant(int& id);
    void setnom(std::string& nom);
    void setprenom(std::string& prenom);
    void setdaten(date& naissance);


};

