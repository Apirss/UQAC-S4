//
// Created by chan on 02/02/24.
//

#ifndef EXERCICE_3_COMPTECOURANT_H
#define EXERCICE_3_COMPTECOURANT_H

#include "CompteBancaire.h"
#include <string>
using namespace std;

class CompteCourant : public CompteBancaire
{
private:
    int Decouvert;
public:
    CompteCourant(string, int, int, int);
    ~CompteCourant();
    void AfficherSolde() override;
    void Retirer(int montant) override;
};

#endif //EXERCICE_3_COMPTECOURANT_H
