//
// Created by chan on 02/02/24.
//

#ifndef EXERCICE_4_TABLEAUBORNE_H
#define EXERCICE_4_TABLEAUBORNE_H

#include <iostream>
#include "Tableau.h"
using namespace std;

class TableauBorne : public Tableau
{
private:
    float inf;
    float sup;
public:
    TableauBorne(int _taille, float _inf, float _sup);
    float operator[](int index);
    void operator()(int index, float newVal);
};

#endif //EXERCICE_4_TABLEAUBORNE_H
