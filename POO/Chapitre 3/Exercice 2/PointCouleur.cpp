#include <iostream>
#include "PointCouleur.h"
using namespace std;

PointCouleur::PointCouleur(): couleur("") {}

PointCouleur::PointCouleur(double x, double y, string c) : Point(x, y), couleur(c) {}

void PointCouleur::affiche()
{
    cout << "pointCouleur : " << x << " " << y << " " << couleur <<endl;
}

PointCouleur PointCouleur::operator=(PointCouleur& pc)
{
//p = q
//un pointeur de type Point p1 pointant vers objet pointcouleur, qui represente p.
    Point* p1 = this;
//un pointeur p2 pointant vers l'objet pc qui represente q.
    Point *p2 = &pc;
//affection de la partie point de q à p (appel de l'operateur= surdéfini dans la classe Point)
    *p1 = *p2;
    couleur = pc.couleur;
    return *this;
}