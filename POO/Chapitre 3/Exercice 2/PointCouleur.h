//
// Created by Apirss on 01/02/2024.
//

#ifndef EXERCICE_2_POINTCOULEUR_H
#define EXERCICE_2_POINTCOULEUR_H

#include <string>
#include "Point.h"
using namespace std;

class PointCouleur : public Point
{
private:
    string couleur;
public:
    PointCouleur();
    PointCouleur(double, double, string);
    PointCouleur operator=(PointCouleur&);
    void affiche();
};

#endif //EXERCICE_2_POINTCOULEUR_H
