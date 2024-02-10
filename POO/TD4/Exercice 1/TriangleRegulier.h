//
// Created by Apirss on 10/02/2024.
//

#ifndef EXERCICE_1_TRIANGLEREGULIER_H
#define EXERCICE_1_TRIANGLEREGULIER_H

#include <iostream>
#include <cmath>
#include "Triangle.h"
#include "PolygoneRegulier.h"
using namespace std;

class TriangleRegulier : public virtual Triangle, public virtual PolygoneRegulier
{
public:
    TriangleRegulier() : Triangle(), PolygoneRegulier(){}
    TriangleRegulier(int l) : Polygone(3), Triangle(l, sqrt(3) * l/2), PolygoneRegulier(3, l){}
    void affiche() const
    {
        Triangle::affiche();
        PolygoneRegulier::affiche();
    }
};

#endif //EXERCICE_1_TRIANGLEREGULIER_H
