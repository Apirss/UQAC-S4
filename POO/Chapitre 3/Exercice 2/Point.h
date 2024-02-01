//
// Created by Apirss on 01/02/2024.
//

#ifndef EXERCICE_2_POINT_H
#define EXERCICE_2_POINT_H

class Point
{
protected:
    double x;
    double y;
public:
    Point();
    Point(double, double);
    void affiche();
    Point operator=(Point&);
};

#endif //EXERCICE_2_POINT_H
