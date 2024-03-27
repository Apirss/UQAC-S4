//
// Created by Apirss on 18/03/2024.
//


#ifndef TP3_POINT_H
#define TP3_POINT_H

using namespace std;

class Point
{
private:
    double x,y;
public:
    Point() : x(0), y(0) {};
    Point(double _x, double _y) : x(_x), y(_y) {};

    bool operator>(Point p) const
    {
        return x > p.x || (x == p.x && y > p.y);
    }

    Point operator+ (Point p) const
    {
        return {x + p.x, y + p.y};
    }

    Point operator* (Point p) const
    {
        return {x * p.x, y * p.y};
    }

    void display() const
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
#endif //TP3_POINT_H
