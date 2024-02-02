//
// Created by chan on 02/02/24.
//

#ifndef EXERCICE_3_COMPTEBANCAIRE_H
#define EXERCICE_3_COMPTEBANCAIRE_H
#include <string>
#include <iostream>
using namespace std;

class CompteBancaire
{
protected:
    string nom;
    int compte_nbr;
    int solde;
public:
    CompteBancaire();
    CompteBancaire(string, int, int);
    ~CompteBancaire();
    void Deposer(int montant);

    virtual void Retirer(int montant);
    virtual void AfficherSolde();
};

#endif //EXERCICE_3_COMPTEBANCAIRE_H
