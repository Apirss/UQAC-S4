//
// Created by chan on 02/02/24.
//

#ifndef EXERCICE_2_BIBLIOTHEQUE_H
#define EXERCICE_2_BIBLIOTHEQUE_H

#include<vector>
#include "Livre.h"

class Bibliotheque {
private:
    vector<Livre> collection;
    int tailleMax;
public:
    Bibliotheque(int taille);
    ~Bibliotheque();
    void ajouterLivre(const Livre&);
    void afficherDetails();
    void supprimerLivre(int);
};

#endif //EXERCICE_2_BIBLIOTHEQUE_H
