#include <iostream>
#include <vector>
#include "Coord.h"
#include "Point.h"

using namespace std;

template <class T>
Coord<T> concat(Coord<T> c1, Coord<T> c2)
{
    vector<T> data;
    for (T elt:c1.get())
    {
        data.push_back(elt);
    }
    for (T elt:c2.get())
    {
        data.push_back(elt);
    }
    return Coord(data);
}

int main()
{
    //Partie 1
    cout << "Partie 1" << endl;
    vector<int> values1 = {1, 2, 3};
    vector<int> values2 = {4, 5, 6};
    Coord<int> coord1(values1);
    Coord<int> coord2(values2);

    Coord<int> s = coord1 + coord2;
    int dotProduct = coord1 * coord2;

    cout << "Coord1 : ";
    coord1.display();
    cout << "Coord2 : ";
    coord2.display();
    cout << "Sum : ";
    s.display();
    cout << "Dot Product : " << dotProduct << endl;

    //Partie 2
    cout << endl;
    cout << "Partie 2" << endl;
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5};
    Coord<int> c1(values1);
    Coord<int> c2(values2);
    Coord<int> c3 = concat(c1,c2);
    c3.display();

    //Partie 3
    cout << endl;
    cout << "Partie 3" << endl;
    Point p1(7, 7);
    Point p2(4, 4);

    cout << "p1 : ";
    p1.display();

    cout << "p2 : ";
    p2.display();


    cout << "p1 > p2 : " << (p1 > p2) << endl;


    Point sum = p1 + p2;
    cout << "Sum : ";
    sum.display();

    Point product = p1 * p2;
    cout << "Product : ";
    product.display();
    return 0;
}