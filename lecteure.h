
class lecteure:{
    private:
    std::string _identifiant;
    std::string _nom;
    std::string _prenom;
    std::vector<int> _listeisbn;
    public:
    lecteure(std::string id,std::string n,std::string p)
    std::string identifiant() const;
    std::string nom() const;
    std::string prenom() const;
    std::vector<int> listeisbn() const;

    void setidentifiant(std::string d);
    void setnom(std::string n);
    void setprenom(std::string p);
    void setliste(std::vector<int> l);
    



}