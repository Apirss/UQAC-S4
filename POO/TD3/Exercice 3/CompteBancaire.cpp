//
// Created by chan on 02/02/24.
//

#include "CompteBancaire.h"
#include <string>

CompteBancaire::CompteBancaire() : nom(""), compte_nbr(0), solde(0){}

CompteBancaire::CompteBancaire(string n, int cn, int s) : nom(n), compte_nbr(cn), solde(s){}

CompteBancaire::~CompteBancaire() {
    cout << "Destruction Compte Bancaire" << endl;
}

 void CompteBancaire::AfficherSolde() {
    cout << "Solde du Compte Bancaire : " << solde << endl;
}

void CompteBancaire::Deposer(int montant) {
    solde += montant;
}

void CompteBancaire::Retirer(int montant) {
    if(solde - montant >= 0)
        solde -= montant;
}
