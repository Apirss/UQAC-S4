//
// Created by chan on 02/02/24.
//

#include<string>
#include<iostream>
#include "Personne.h"
using namespace std;

Personne::Personne() {
    nom = "";
    age = 0;
    profession = "";
};
Personne::Personne(string nom, int age, string profession) {
    this->nom = nom;
    this->age = age;
    this->profession = profession;
};
ostream& operator<<(ostream& sortie, const Personne& p) {
    sortie << "Nom: " << p.nom << ", Age: " << p.age << ", Profession : " << p.profession << endl;
    return sortie;
};