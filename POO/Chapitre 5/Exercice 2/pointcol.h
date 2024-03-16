//
// Created by Apirss on 16/03/2024.
//
#include <iostream>

using namespace std;

#ifndef EXERCICE_2_POINTCOL_H
#define EXERCICE_2_POINTCOL_H

template <class T, class U>
class PointCol
{
public:
    T x;
    T y;
    U Col;
    PointCol(T _x, T _y, U _col) : x(_x), y(_y), Col(_col){}
    void affiche()
    {
        cout << "Coordonnees :" << endl;
        cout << "X : " << x << " ; Y : " << y << endl;
        cout << "Couleur : " << Col << endl;
    }
};

#endif //EXERCICE_2_POINTCOL_H
