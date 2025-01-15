#include<iostream>
#include"auteur.h"
auteur::auteur(int id,std::string n,std::string pr,date d): _identifiant(id),_nom(n),_prenom(pr),_daten(d) {}
int auteur::identifiant()const {return _identifiant;}
std::string auteur::nom()const {return _nom;}
std::string auteur::prenom()const{return _prenom;}
date auteur::daten() const{return _daten;}

void auteur::setidentifiant(int& id){_identifiant=id;}
void auteur::setnom(std::string& nom){_nom=nom;}
void auteur::setprenom(std::string& prenom){_prenom=prenom;}
void auteur::setdaten(date& naissance){_daten=naissance;}


