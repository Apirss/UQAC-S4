//
// Created by Apirss on 21/03/2024.
//

#ifndef EXERCICE_2_COMPTEBANCAIRE_H
#define EXERCICE_2_COMPTEBANCAIRE_H

#include <iostream>

using namespace std;

class CompteBancaire
{
private:
    double solde;
public:
    CompteBancaire(double s = 0) : solde(s){};
    void depot(double montant)
    {
        if(montant < 0) {throw invalid_argument("Montant négatif !");}
        else
            solde += montant;
    }
    void retrait(double montant)
    {
        if (montant > solde){throw range_error("Vous n'avez pas ce montant !");}
        else
            solde -= montant;
    }
    double getSolde() const
    {
        return solde;
    }
};
#endif //EXERCICE_2_COMPTEBANCAIRE_H
