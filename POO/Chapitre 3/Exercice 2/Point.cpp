#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(): x(0), y(0){}

Point::Point(double x, double y) : x(x), y(y){}

void Point::affiche()
{
    cout << "x = " << x << " y = " << y <<endl;
}

Point Point::operator=(Point& p)
{
    cout << "Appel de l'operateur = de Point" << endl;
    x = p.x;
    y = p.y;
    return *this; //retourner une référence à l'objet lui-même
}