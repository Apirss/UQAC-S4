//
// Created by chan on 02/02/24.
//

#ifndef EXERCICE_3_COMPTEEPARGNE_H
#define EXERCICE_3_COMPTEEPARGNE_H

#include "CompteBancaire.h"
#include <string>
using namespace std;

class CompteEpargne : public CompteBancaire
{
private:
    float TauxInteret;
public:
    CompteEpargne(string, int, int, float);
    ~CompteEpargne();
    void AfficherSolde() override;
};

#endif //EXERCICE_3_COMPTEEPARGNE_H
