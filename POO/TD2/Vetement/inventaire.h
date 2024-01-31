//
// Created by Apirss on 26/01/2024.
//
#include "Vetement.h"
#include <vector>

#ifndef VETEMENT_INVENTAIRE_H
#define VETEMENT_INVENTAIRE_H

class Inventaire {
    std::vector<Vetement> vetements;
public:
    void ajouterVetement(const Vetement& vetement);
    void enleverVetement(const Vetement& vetement);
    void afficherInventaire() const;
    friend Vetement comparerPrix(const Inventaire&);
};

#endif //VETEMENT_INVENTAIRE_H
