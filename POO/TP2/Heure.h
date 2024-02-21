//
// Created by chan on 21/02/24.
//

#ifndef TP2_HEURE_H
#define TP2_HEURE_H
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Heure
{
protected:
    int heure;
    int minute;
    int seconde;
public:
    Heure(int h, int m, int s)
    {
        if(h >= 0 && h <= 23)
            heure = h;
        else
            heure = 0;

        if(m >= 0 && m <= 59)
            minute = m;
        else
            minute = 0;

        if(s >= 0 && s <= 59)
            seconde = s;
        else
            seconde = 0;
    }

    bool operator > (Heure h) const
    {
        if (heure > h.heure)
            return true;
        else if(heure == h.heure)
        {
            if(minute > h.minute)
                return true;
            else if(minute == h.minute)
            {
                if(seconde > h.seconde)
                    return true;
                else
                    return false;
            }
        }
        else
            return false;
    }

    void affiche() const
    {
        if(heure < 10)
            cout << setw(2) << setfill('0') << heure << ":";
        else
            cout << heure << ":";

        if(minute < 10)
            cout << setw(2) << setfill('0') << minute << ":";
        else
            cout << minute << ":";

        if(seconde < 10)
            cout << setw(2) << setfill('0') << seconde << ":";
        else
            cout << seconde << endl;
    }

};
#endif //TP2_HEURE_H
