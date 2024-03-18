//
// Created by Apirss on 17/03/2024.
//

#include <iostream>
#include "Figure.h"
using namespace std;

#ifndef EXERCICE_2_TRIANGLE_H
#define EXERCICE_2_TRIANGLE_H

class Triangle : public Figure
{
private:
    double base, hauteur;
public:
    Triangle(double b = 0, double h = 0) : base(b), hauteur(h){};
    Triangle(const Triangle &t) : base(t.base), hauteur(t.hauteur){};
    void affiche() const override
    {
        cout << "Triangle de base " << base << " et de hauteur " << hauteur << endl;
    }
    Figure * copie() const override
    {
        return new Triangle(*this);
    }
    ~Triangle()
    {
        cout << "Destruction Triangle" << endl;
    }

};

#endif //EXERCICE_2_TRIANGLE_H
