//
// Created by Apirss on 17/03/2024.
//

#include <iostream>

using namespace std;
#ifndef EXERCICE_2_FIGURE_H
#define EXERCICE_2_FIGURE_H

class Figure
{
public:
    virtual void affiche() const = 0;
    virtual Figure* copie() const = 0;
    virtual ~Figure(){};
};

#endif //EXERCICE_2_FIGURE_H
