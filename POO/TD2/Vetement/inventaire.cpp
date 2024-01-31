//
// Created by Apirss on 26/01/2024.
//
#include <string>
#include <iostream>
#include "inventaire.h"

void Inventaire::ajouterVetement(const Vetement& v) {
    vetements.push_back(v);
}

void Inventaire::enleverVetement(const Vetement& v) {
    int i = 0;
    for (Vetement& vt : vetements) {
        if ((vt.getNom() ==v.getNom()) && (vt.getPrix() == v.getPrix()) && (vt.getTaille() ==
                                                                            v.getTaille()))
        {
            vetements.erase(vetements.begin() + i);
            break;
        }
        i++;
    }
}

void Inventaire::afficherInventaire() const {
    for (const Vetement& v : vetements) {
        v.afficherDetails();
    }
}

Vetement comparerPrix(const Inventaire& inventaire) {
    double prixMax = 0;
    Vetement vetementPlusCher;
    for (const Vetement& v : inventaire.vetements) {
        if (v.getPrix() > prixMax) {
            prixMax = v.getPrix();
            vetementPlusCher = v;
        }
    }
    return vetementPlusCher;
}