//
// Created by chan on 21/02/24.
//

#ifndef TP2_DATEH_H
#define TP2_DATEH_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Date.h"
#include "Heure.h"

using namespace std;

class DateH : public Heure, public Date
{
public:
    DateH(int j, int m, int a, int h, int min, int s) : Date(j,m,a), Heure(h,min,s){};

    void affiche() const override
    {
        Date::affiche();
        Heure::affiche();
    }

    bool operator > (DateH d) const
    {
        if(année > d.année)
            return true;
        else if(année == d.année) {
            if (mois > d.mois)
                return true;
            else if (mois == d.mois) {
                if (jour > d.jour)
                    return true;
                else if(jour == d.jour)
                    return Heure::operator>(Heure(d.heure,d.minute, d.seconde));
            }
        }
        return false;
    }
};
#endif //TP2_DATEH_H
