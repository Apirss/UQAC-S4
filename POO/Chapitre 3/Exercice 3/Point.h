//
// Created by chan on 07/02/24.
//

#ifndef EXERCICE_3_POINT_H
#define EXERCICE_3_POINT_H


#include <string>
#include <iostream>

using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point()
    {
        x = 0;
        y = 0;
    };
    Point(int _x, int _y) : x(_x), y(_y){};
    void afficher() const
    {
        cout << "Coordonnées du Point : X = " << x << " ; Y = " << y << endl;
    }
};

#endif //EXERCICE_3_POINT_H
