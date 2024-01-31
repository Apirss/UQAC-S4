#include <string>
#include <iostream>
#include "vetement.h"

int Vetement::nombreVetements = 0;

Vetement::Vetement() {}

Vetement::Vetement(string nom, double prix, string taille) : nom(nom), prix(prix), taille(taille){
    nombreVetements++;
}

Vetement::~Vetement() {
    nombreVetements--;
}

string Vetement::getNom() const { return nom; }
void Vetement::setNom(string& nom) { this->nom = nom; }

double Vetement::getPrix() const { return prix; }
void Vetement::setPrix(double prix) { this->prix = prix; }

string Vetement::getTaille() const { return taille; }
void Vetement::setTaille(string& taille) { this->taille = taille; }

void Vetement::afficherNombreVetements() {
    cout << "Nombre total de vetements: " << nombreVetements << endl;
}

void Vetement::afficherDetails() const {
    cout << "Nom: " << nom << ", Prix: " << prix << ", Taille: " << taille << endl;
}

void appliquerReduction(Vetement &v, double reduction) {
    v.prix *= (1 - reduction/100);
}
