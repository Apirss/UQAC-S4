//
// Created by Apirss on 10/02/2024.
//

#ifndef EXERCICE_1_POLYGONEREGULIER_H
#define EXERCICE_1_POLYGONEREGULIER_H

#include <iostream>
#include "Polygone.h"
using namespace std;

class PolygoneRegulier : public virtual Polygone
{
private:
    int longueurCote;
public:
    PolygoneRegulier() : Polygone(){longueurCote = 0;}
    PolygoneRegulier(int nbr, int l) : Polygone(nbr){longueurCote = l;}
    int perimetre() const{return nombreDeCotes * longueurCote;}
    void affiche() const
    {
        cout << "Nombre de cote : " << nombreDeCotes << endl;
        cout << "Longueur d'un cote : " << longueurCote << endl;
        cout << "Perimetre : " << perimetre() << endl;
    }
};

#endif //EXERCICE_1_POLYGONEREGULIER_H
