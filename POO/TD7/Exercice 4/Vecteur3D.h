//
// Created by chan on 27/03/24.
//

#ifndef EXERCICE_4_VECTEUR3D_H
#define EXERCICE_4_VECTEUR3D_H

#include <math.h>
#include "Vecteur3DException.h"
using namespace std;

class Vecteur3D
{
private:
    double x,y,z;
public:
    Vecteur3D(double x1, double y1, double z1) : x(x1), y(y1), z(z1){};
    double normaliser()
    {
        double norme = sqrt(x*x+y*y+z*z);
        if(norme == 0)
            throw Vecteur3DException("La norme est nulle");
        cout << "Norme :" << endl;
        x /= norme;
        y /= norme;
        z /= norme;
        cout << "x : " << x << ", " << "y : " << y << ", " << "z : " << z << endl;
    }
};
#endif //EXERCICE_4_VECTEUR3D_H
