//
// Created by Apirss on 17/03/2024.
//

#include <iostream>
#include <vector>
#include "Figure.h"

using namespace std;

#ifndef EXERCICE_2_DESSIN_H
#define EXERCICE_2_DESSIN_H

class Dessin
{
private:
    vector<Figure*> figures;
public:
    void ajouteFigure(const Figure &f)
    {
        figures.push_back(f.copie());
    }
    void affiche()const
    {
        for (Figure* fig:figures)
        {
            fig->affiche();
        }
    }
    ~Dessin()
    {
        cout << "Destruction Dessin" << endl;
        for (Figure* fig:figures)
        {
            delete fig;
        }
    }
};

#endif //EXERCICE_2_DESSIN_H
