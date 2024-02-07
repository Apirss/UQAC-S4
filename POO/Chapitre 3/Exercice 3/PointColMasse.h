//
// Created by chan on 07/02/24.
//

#ifndef EXERCICE_3_POINTCOLMASSE_H
#define EXERCICE_3_POINTCOLMASSE_H
#include <string>
#include <iostream>
#include "PointMasse.h"
#include "PointCouleur.h"

using namespace std;

class PointColMasse : public PointMasse, public PointCouleur
{
public:
    PointColMasse(){PointMasse(); PointCouleur();};
    PointColMasse(int _x, int _y, int p, string n) : Point(_x, _y), PointMasse(_x, _y, p), PointCouleur(_x, _y, n){};
    void afficher()
    {
        Point::afficher();
        Couleur::afficher();
        Masse::afficher();
    }
};
#endif //EXERCICE_3_POINTCOLMASSE_H
