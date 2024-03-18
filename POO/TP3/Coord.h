//
// Created by Marco on 18/03/2024.
//

#include <iostream>
#include <vector>

using namespace std;

#ifndef TP3_COORD_H
#define TP3_COORD_H

template <class T>
class Coord
{
private:
    vector<T> coordonnes;
public:

    //Constructeur : Vecteur d'éléments
    Coord(const vector<T> coo) : coordonnes(coo){};

    //Constructeur : Par Copie
    Coord(const Coord& c) : coordonnes(c.coordonnes){};

    //Opérateur d'affectation
    Coord& operator= (const Coord& c)
    {
        coordonnes = c.coordonnes;
        return *this;
    }

    //Opérateur +
    Coord operator+ (const Coord& c)
    {
        Coord res = Coord(*this);
        for (size_t i = 0; i < res.coordonnes.size(); ++i)
        {
            res.coordonnes[i] += c.coordonnes[i];
        }
        return res;
    }

    //Opérateur *
    T operator*(const Coord& c) const
    {
        T res = T();
        for (size_t i = 0; i < coordonnes.size(); ++i)
        {
            res += (coordonnes[i] * c.coordonnes[i]);
        }
        return res;
    }

    //Getter
    vector<T> get() const
    {
        return coordonnes;
    }

    //Display
    void display() const
    {
        for (T coo:coordonnes)
        {
            cout << coo << " ";
        }
        cout << endl;
    }
};

#endif //TP3_COORD_H
