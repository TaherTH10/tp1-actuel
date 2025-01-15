friend std::ostream& operator<<(std::ostream& os, const Auteur& auteur);
std::ostream& operator<<(std::ostream& os, const Auteur& auteur) {
    os << "Auteur: " << auteur.prenom() << " " << auteur.nom() << " (ID: " << auteur.id() << ")\n";
    os << "Date de naissance: " << auteur.dateNaissance().toString() << "\n";
    return os;
}
