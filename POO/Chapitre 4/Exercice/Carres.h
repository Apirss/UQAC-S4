//
// Created by chan on 21/02/24.
//

#ifndef EXERCICE_CARRES_H
#define EXERCICE_CARRES_H

#include <string>
#include <iostream>
#include <cmath>
#include "Formes.h"

using namespace std;

class Carres : public Formes
{
private:
    int cote;
public:
    Carres(int c) : cote(c){};
    void affiche() const override
    {
        cout << "Carre de cote : " << cote << endl;
    };
    int Perimetre() const override
    {
        return 4 * cote;
    }
    int Aire() const override
    {
        return cote * cote;
    }
};

#endif //EXERCICE_CARRES_H
