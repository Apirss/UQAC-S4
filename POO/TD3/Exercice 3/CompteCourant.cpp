//
// Created by chan on 02/02/24.
//

#include "CompteCourant.h"
#include <string>
using namespace std;

CompteCourant::CompteCourant(string name, int nbr, int s, int d) : CompteBancaire(name, nbr,s), Decouvert(d){}

CompteCourant::~CompteCourant() {
    cout << "Destruction Compte Courant" << endl;

}

void CompteCourant::AfficherSolde() {
    cout << "Solde du Compte Courant : " << solde << endl;
    cout << "Decouvert Autorisé du Compte Courant : " << Decouvert << endl;
}

void CompteCourant::Retirer(int montant) {
    if(solde - montant >= -Decouvert)
        solde -= montant;
}
