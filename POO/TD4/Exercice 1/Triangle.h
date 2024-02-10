//
// Created by Apirss on 10/02/2024.
//

#ifndef EXERCICE_1_TRIANGLE_H
#define EXERCICE_1_TRIANGLE_H

#include <iostream>
#include "Polygone.h"
using namespace std;

class Triangle : public virtual Polygone
{
private:
    int base;
    int hauteur;
public:
    Triangle() : Polygone(3){base = 0; hauteur = 0;}
    Triangle(int b, int h) : Polygone(3){base = b; hauteur = h;}
    int aire() const{return (base * hauteur)/2;}
    void affiche() const
    {
        cout << "Base : " << base << endl;
        cout << "Hauteur : " << hauteur << endl;
        cout << "Aire : " << aire() << endl;
    }
};

#endif //EXERCICE_1_TRIANGLE_H
