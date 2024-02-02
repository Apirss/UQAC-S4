//
// Created by chan on 02/02/24.
//

#include<string>
#include<iostream>
#include "Bibliotheque.h"

Bibliotheque::Bibliotheque(int capacite) :tailleMax(capacite){}

void Bibliotheque::ajouterLivre(const Livre& livre) {
    if (collection.size() >= tailleMax) {
        cout << "La bibliothèque est pleine. Il n'est pas possible d'ajouter d'autres livres." << endl;
    }
    else {collection.push_back(livre);}
}
void Bibliotheque::afficherDetails() {
    if (collection.size() == 0) { cout << "La bibliotheque est vide."; }
    else {
        cout << "------------- Livres dans la bibliotheque :" << endl;
        for (Livre& livre : collection) {livre.afficherDetails();}
    }
}
void Bibliotheque::supprimerLivre(int id) {
    int i = 0;
    for (Livre& livre : collection) {
        if (livre.getId() == id) { collection.erase(collection.begin()+i); break; }
        i++;
    }
}

Bibliotheque::~Bibliotheque() { cout << "Appel du destructeur de la classe bibliotheque." << endl; }