//
// Created by chan on 07/02/24.
//

#ifndef EXERCICE_3_MASSE_H
#define EXERCICE_3_MASSE_H

#include <string>
#include <iostream>

using namespace std;

class Masse{
private:
    int poids;
public:
    Masse();
    Masse(int p): poids(p){};
    void afficher()
    {
        cout << "La Masse a pour poids :" << poids << endl;
    }
};

#endif //EXERCICE_3_MASSE_H
