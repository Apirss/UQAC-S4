//
// Created by chan on 07/02/24.
//

#ifndef EXERCICE_3_COULEUR_H
#define EXERCICE_3_COULEUR_H

#include <string>
#include <iostream>

using namespace std;

class Couleur
{
private:
    string name;
public:
    Couleur();
    Couleur(string n) : name(n){};
    void afficher()
    {
        cout << "La couleur est : " << name << endl;
    }
};
#endif //EXERCICE_3_COULEUR_H
