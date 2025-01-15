#include "date.h"
#include <iostream>
#include <sstream>

// Vérifie si une date est valide
bool isDate(int month, int day, int annee) {
    if (month < 1 || month > 12 || day < 1) return false;
    int daysInMonth = getDaysInMonth(month);

    // Vérification des années bissextiles pour février
    if (month == 2 && ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0))) {
        daysInMonth = 29;
    }

    return day <= daysInMonth;
}

// Retourne le nombre de jours dans un mois donné
int getDaysInMonth(int month) {
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return days[month - 1];
}

// Constructeur de Date avec validation
date::date(int month, int day, int annee) {
    if (isDate(month, day, annee)) {
        _month = month;
        _day = day;
        _annee = annee;
    } else {
        std::cerr << "Date invalide. Initialisation à 01/01/2000.\n";
        _month = 1;
        _day = 1;
        _annee = 2000;
    }
}

// Accesseurs
int date::month() const { return _month; }
int date::day() const { return _day; }
int date::annee() const { return _annee; }

// Mutateurs
void date::updateMonth(int month) {
    if (month >= 1 && month <= 12) {
        _month = month;
    } else {
        std::cerr << "Mois invalide.\n";
    }
}

void date::updateDay(int day) {
    if (day >= 1 && day <= getDaysInMonth(_month)) {
        _day = day;
    } else {
        std::cerr << "Jour invalide.\n";
    }
}

void date::updateAnnee(int annee) {
    _annee = annee;
}

// Avancer d'un jour
void date::next() {
    _day++;
    if (_day > getDaysInMonth(_month)) {
        _day = 1;
        _month++;
        if (_month > 12) {
            _month = 1;
            _annee++;
        }
    }
}

// Reculer d'un jour
void date::back() {
    _day--;
    if (_day < 1) {
        _month--;
        if (_month < 1) {
            _month = 12;
            _annee--;
        }
        _day = getDaysInMonth(_month);
    }
}

// Convertir la date en string
std::string toString(date d) {
    std::ostringstream oss;
    oss << d.day() << "/" << d.month() << "/" << d.annee();
    return oss.str();
}

// Calcul du jour de l'année
int dayOfYear(date d) {
    int totalDays = d.day();
    for (int i = 1; i < d.month(); i++) {
        totalDays += getDaysInMonth(i);
    }
    return totalDays;
}
