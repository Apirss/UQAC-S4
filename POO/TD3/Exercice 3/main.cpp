//
// Created by chan on 02/02/24.
//

#include "CompteCourant.h"
#include "CompteEpargne.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    CompteBancaire CB = CompteBancaire("C++Bank", 241, 2768);
    CB.AfficherSolde();
    cout << "Dépot de 100" << endl;
    CB.Deposer(100);
    CB.AfficherSolde();
    cout << "Retire 50" << endl;
    CB.Retirer(50);
    CB.AfficherSolde();

    CompteEpargne CE = CompteEpargne("C++Bank", 242, 2768, 3.2);
    CE.AfficherSolde();
    cout << "Dépot de 100" << endl;
    CE.Deposer(100);
    CE.AfficherSolde();
    cout << "Retire 50" << endl;
    CE.Retirer(50);
    CE.AfficherSolde();

    CompteCourant CC = CompteCourant("C++Bank", 243, 100, 1000);
    CC.AfficherSolde();
    cout << "Dépot de 100" << endl;
    CC.Deposer(100);
    CC.AfficherSolde();
    cout << "Retire 50" << endl;
    CC.Retirer(1000);
    CC.AfficherSolde();

    return 0;
}