//
// Created by Apirss on 21/03/2024.
//

#ifndef CHAPITRE_6_POINT_H
#define CHAPITRE_6_POINT_H

#include <iostream>
#include "exception.h"

using namespace std;

class Point
{
private:
    int x,y;
public:
    Point(int _x, int _y)
    {
        if (_x == _y)
            throw err_same();
        x = _x;
        y = _y;
    }

    Point()
    {
        throw err_constructor(0);
    }

    Point(int _x) : Point(_x, 0)
    {
        throw err_constructor(1);
    }
};
#endif //CHAPITRE_6_POINT_H
