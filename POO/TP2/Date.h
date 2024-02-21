//
// Created by chan on 21/02/24.
//

#ifndef TP2_DATE_H
#define TP2_DATE_H
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Date
{
protected:
    int jour;
    int mois;
    int année;
public:
    Date(int j, int m, int a) {
        année = a;
        if(m >= 1 && m <= 12)
            mois = m;
        else
            mois = 1;

        if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
        {
            switch (m)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12: {
                    if (j >= 1 && j <= 31)
                        jour = j;
                    else
                        jour = 1;
                    break;
                }
                case 4:
                case 6:
                case 9:
                case 11:
                {
                    if (j >= 1 && j <= 30)
                        jour = j;
                    else
                        jour = 1;
                    break;
                }
                case 2:
                {
                    if (j >= 1 && j <= 29)
                        jour = j;
                    else
                        jour = 1;
                }
            }
        }
        else
        {
            switch (m)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12: {
                    if (j >= 1 && j <= 31)
                        jour = j;
                    else
                        jour = 1;
                    break;
                }
                case 4:
                case 6:
                case 9:
                case 11:
                {
                    if (j >= 1 && j <= 30)
                        jour = j;
                    else
                        jour = 1;
                    break;
                }
                case 2:
                {
                    if (j >= 1 && j <= 28)
                        jour = j;
                    else
                        jour = 1;
                }
            }
        }
    }
};
#endif //TP2_DATE_H
