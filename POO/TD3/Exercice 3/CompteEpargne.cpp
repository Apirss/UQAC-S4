//
// Created by chan on 02/02/24.
//

#include "CompteEpargne.h"
#include <string>
using namespace std;

CompteEpargne::CompteEpargne(string name, int nbr, int s, float ti) : CompteBancaire(name,nbr,s), TauxInteret(ti){}

CompteEpargne::~CompteEpargne() {
    cout << "Destruction Compte Epargne" << endl;
}

void CompteEpargne::AfficherSolde() {
    cout << "Solde du Compte Epargne : " << solde << endl;
    cout << "Taux d'Intérêts du Compte Epargne : " << TauxInteret << endl;
}
