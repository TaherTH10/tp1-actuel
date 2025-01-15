class livre
{
private:
    std::string _titre;
    std::string _auteur;
    std::string _langue;
    std::string _genre;
    std::string _datepu;
    int _ISBN;
public:
    livre(std::string t,std::string a,std::string l,std::string g,std::string d,int ISBN );
    std::string titre() const;
    std::string auteur() const;
    std::string langue() const;
    std::string genre() const;
    std::string datep() const;
    int ISBN() const;
    void settitre(std::string titre);
    void setauteur(std::string auteur);
    void setlangue(std::string langue);
    void setgenre( std::string genre);
    void setdatep(std::string datep);
    int setISBN(int ISBN);

};


