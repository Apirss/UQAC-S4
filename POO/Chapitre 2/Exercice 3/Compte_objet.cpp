//
// Created by chan on 02/02/24.
//

#include <iostream>
#include "Compte_objet.h"

using namespace std;

int Compte_objet::cp = 0; // Initialisation du membre statique

Compte_objet:: Compte_objet() {
    cp++;
    cout << "Nombre d'objets actuellement : "<<cp<<"\n";
}

Compte_objet::~Compte_objet() {
    cp--; // Décrémentation
    cout << "Nombre d'objets actuellement : " << cp << "\n";
}