//
// Created by chan on 02/02/24.
//

#include "Tableau.h"

Tableau::Tableau(int _taille) : taille(_taille), elements(new float[_taille]){}

Tableau::Tableau(const Tableau &table) : taille(table.taille), elements(new float[table.taille]){
    for (int i = 0; i < table.taille; ++i) {
        elements[i] = table.elements[i];
    }
}

Tableau::~Tableau() {
    delete[] elements;
}

Tableau &Tableau::operator=(const Tableau &table) {
    if(this != &table)
    {
        delete[] elements;
        taille = table.taille;
        elements = new float[table.taille];
        for (int i = 0; i < table.taille; ++i) {
            elements[i] = table.elements[i];
        }
    }
    return *this;
}

float& Tableau::operator[](int index) {
    if (index < 0 || index >= taille) {
        cerr << "Index hors limites. Arrêt du programme.\n";
        exit(EXIT_FAILURE);
    }
    return elements[index];
}
