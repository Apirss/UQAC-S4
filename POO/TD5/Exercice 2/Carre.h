//
// Created by Apirss on 17/03/2024.
//

#include <iostream>
#include "Figure.h"
using namespace std;
#ifndef EXERCICE_2_CARRE_H
#define EXERCICE_2_CARRE_H

class Carre : public Figure
{
private:
    double cote;
public:
    Carre(double c = 0) : cote(c){};
    Carre(const Carre &c) : cote(c.cote){};
    void affiche() const override
    {
        cout << "Carre de cote : " << cote << endl;
    }
    Figure * copie() const override
    {
        return new Carre(*this);
    }
    ~Carre()
    {
        cout << "Destruction Carre" << endl;
    }

};

#endif //EXERCICE_2_CARRE_H
