//
// Created by chan on 27/03/24.
//

#ifndef EXERCICE_3_RESERVATION_H
#define EXERCICE_3_RESERVATION_H

#include <iostream>
#include <string>
using namespace std;

class Reservation
{
private:
    int billetsDisponibles;
    string nomEvenement;
public:
    Reservation(int nbr, string name) : billetsDisponibles(nbr),nomEvenement(name){};
    void reserverBillets(int nombre)
    {
        if(nombre <= 0)
            throw invalid_argument("Le nombre de billets doit être positif");
        else if (nombre > billetsDisponibles)
            throw out_of_range("Pas assez de places disponibles !");
        else
        {
            billetsDisponibles -= nombre;
        }
    }
    int get()
    {
        return billetsDisponibles;
    }
};
#endif //EXERCICE_3_RESERVATION_H
