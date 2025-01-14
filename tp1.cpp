#include <iostream>
#include "date.h"

int main() {
    // Création de plusieurs dates valides et invalides
    Date d1(2, 29, 2024); // Année bissextile
    Date d2(4, 31, 2023); // Date invalide (avril n'a que 30 jours)
    Date d3(12, 31, 2023); // Dernier jour de l'année
    Date d4; // Date par défaut (01/01/2000)

    // Affichage des dates
    std::cout << "Test affichage des dates :\n";
    std::cout << "Date 1 : " << toString(d1) << std::endl;
    std::cout << "Date 2 : " << toString(d2) << std::endl;
    std::cout << "Date 3 : " << toString(d3) << std::endl;
    std::cout << "Date 4 : " << toString(d4) << std::endl;

    // Test des accesseurs
    std::cout << "\nMois de d1 : " << d1.month() << std::endl;
    std::cout << "Jour de d1 : " << d1.day() << std::endl;
    std::cout << "Année de d1 : " << d1.annee() << std::endl;

    // Test de modification de la date
    d1.updateDay(15);
    d1.updateMonth(7);
    d1.updateAnnee(2025);
    std::cout << "\nDate 1 après mise à jour : " << toString(d1) << std::endl;

    // Test de l'avancement au jour suivant
    d3.next(); // Doit passer à 01/01/2024
    std::cout << "Date 3 après next() : " << toString(d3) << std::endl;

    // Test du retour en arrière
    d3.back(); // Doit revenir à 31/12/2023
    std::cout << "Date 3 après back() : " << toString(d3) << std::endl;

    // Test du calcul du jour de l'année
    std::cout << "\nJour de l'année de d1 : " << dayOfYear(d1) << std::endl;
    std::cout << "Jour de l'année de d3 : " << dayOfYear(d3) << std::endl;

    return 0;
}
