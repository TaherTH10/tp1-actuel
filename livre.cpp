#include<iostream>
#include"livre.h"

 livre::livre(std::string t,std::string a,std::string l,std::string g,date d,int ISBN ): _auteur(a) , _titre(t),_langue(l),_genre(g),_datepu(d),_ISBN(ISBN) {} 
 std::string livre::titre() const{return _titre;}
 std::string livre::auteur() const {return _auteur;}
 std::string livre::langue() const {return _langue;}
 std::string livre::genre() const {return _genre;}
 date livre::datep() const {return _datepu; }
 int livre::ISBN() const {return _ISBN;}
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
 void livre::setdatep(date datep){
    _datepu=datep;
 }
 int livre::setISBN(int ISBN){
    _ISBN=ISBN;
 }