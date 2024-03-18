//
// Created by Apirss on 17/03/2024.
//

#include <iostream>
#include "Figure.h"
using namespace std;
#ifndef EXERCICE_2_CERCLE_H
#define EXERCICE_2_CERCLE_H

class Cercle : public Figure
{
private:
    double rayon;
public:
    Cercle(double r = 0) : rayon(r){};
    Cercle(const Cercle &c) : rayon(c.rayon){};
    void affiche() const override
    {
        cout << "Cercle de rayon : " << rayon << endl;
    }
    Figure * copie() const override
    {
        return new Cercle(*this);
    }
    ~Cercle()
    {
        cout << "Destruction Cercle" << endl;
    }

};

#endif //EXERCICE_2_CERCLE_H
