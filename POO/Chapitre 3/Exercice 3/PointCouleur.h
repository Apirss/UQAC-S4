//
// Created by chan on 07/02/24.
//

#ifndef EXERCICE_3_POINTCOULEUR_H
#define EXERCICE_3_POINTCOULEUR_H

#include <string>
#include <iostream>
#include "Point.h"
#include "Couleur.h"

using namespace std;

class PointCouleur : virtual public Point, public Couleur
{
public:
    PointCouleur(){Point(), Couleur();};
    PointCouleur(int _x, int _y, string n) : Point(_x, _y), Couleur(n){};

    void afficher()
    {
        Point::afficher();
        Couleur::afficher();
    }
};
#endif //EXERCICE_3_POINTCOULEUR_H
