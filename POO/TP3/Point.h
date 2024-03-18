//
// Created by Apirss on 18/03/2024.
//

#ifndef TP3_POINT_H
#define TP3_POINT_H

#include <iostream>
#include <vector>
#include "Coord.h"

using namespace std;

class Point
{
private:
    Coord<double> coo;
public:
    Point(double _x, double _y) : coo({_x,_y}) {};

    bool operator>(Point p) const
    {
        return coo.get()[0] > p.coo.get()[0] || (coo.get()[0] == p.coo.get()[0] && coo.get()[1] > p.coo.get()[1]);
    }

    Point operator+ (Point p) const
    {
        return {coo.get()[0] + p.coo.get()[0], coo.get()[1] + p.coo.get()[1]};
    }

    Point operator* (Point p) const
    {
        return {coo.get()[0] * p.coo.get()[0], coo.get()[1] * p.coo.get()[1]};
    }

    void display() const
    {
        cout << "(" << coo.get()[0] << ", " << coo.get()[1] << ")" << endl;
    }
};
#endif //TP3_POINT_H
