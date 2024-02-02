//
// Created by chan on 02/02/24.
//

#ifndef EXERCICE_4_TABLEAU_H
#define EXERCICE_4_TABLEAU_H

#include <iostream>
using namespace std;

class Tableau
{
protected:
    int taille;
    float* elements;
public:
    Tableau(int _taille);
    Tableau(const Tableau& table);
    ~Tableau();
    Tableau& operator=(const Tableau& table);
    float& operator[](int index);
};
#endif //EXERCICE_4_TABLEAU_H
