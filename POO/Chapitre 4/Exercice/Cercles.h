//
// Created by chan on 21/02/24.
//

#ifndef EXERCICE_CERCLE_H
#define EXERCICE_CERCLE_H

#include <string>
#include <iostream>
#include <cmath>
#include "Formes.h"

using namespace std;

class Cercles : public Formes
{
private:
    int rayon;
public:
    Cercles(int r) : rayon(r){};
    void affiche() const override
    {
        cout << "Cercle de rayon : " << rayon << endl;
    };
    int Perimetre() const override
    {
        return 2 * M_PI * rayon;
    }
    int Aire() const override
    {
        return M_PI * rayon * rayon;
    }
};
#endif //EXERCICE_CERCLE_H
