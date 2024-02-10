//
// Created by Apirss on 10/02/2024.
//

#ifndef EXERCICE_2_APPLICATION_H
#define EXERCICE_2_APPLICATION_H

#include <iostream>
#include <string>
using namespace std;

class Application
{
private:
    string nom;
    string categorie;
    int taille;
public:
    Application(){nom = ""; categorie = ""; taille = 0;}
    Application(string n, string c, int t) : nom(n), categorie(c), taille(t){};
    void affiche() const
    {
        cout << "Nom : " << nom << endl;
        cout << "Categorie : " << categorie << endl;
        cout << "Taille : " << taille << endl << endl;
    }
};

#endif //EXERCICE_2_APPLICATION_H
