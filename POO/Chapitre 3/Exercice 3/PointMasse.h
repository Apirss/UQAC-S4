//
// Created by chan on 07/02/24.
//

#ifndef EXERCICE_3_POINTMASSE_H
#define EXERCICE_3_POINTMASSE_H

#include <string>
#include <iostream>
#include "Point.h"
#include "Masse.h"

using namespace std;

class PointMasse : virtual public Point, public Masse
{
public:
    PointMasse() {Point(), Masse();};
    PointMasse(int _x, int _y, int p) : Point(_x, _y), Masse(p){};
    void afficher()
    {
        Point::afficher();
        Masse::afficher();
    }
};

#endif //EXERCICE_3_POINTMASSE_H
