#include<iostream>
#include<livre.h>
 livre::livre(std::string t,std::string a,std::string l,std::string g,std::string d,int ISBN ): a(_auteur) , t(_titre),l(_langue);g(_genre),d(_datepu),ISBN(_ISBN) {} 
 std::string livre::titre() const{return _titre;}
 std::string livre::auteur() const {return _auteur;}
 std::string livre::langue() const {return _langue}
 std::string livre::genre() const {return _genre;}
 int livre::ISBN(){return _ISBN;}
 void livre::settitre(std::string titre){
    _titre=titre;
 }
 void livre::setauteur(std::string auteur){
    _auteur=auteur;
 }
 void livre::setlangue(std::string langue){
    _langue=langue;
 }
 void livre::setgenre(std::string genre){
    _genre=genre;
 }
 void livre::setdatep(std::string datep){
    _datepu=datep;
 }
 int livre::setISBN(int ISBN){
    _ISBN=ISBN;
 }