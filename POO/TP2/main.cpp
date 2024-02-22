//
// Created by chan on 21/02/24.
//
#include <iostream>
#include <string>
#include "DateH.h"

using namespace std;

int main()
{
    Heure h1 = Heure(19,40,45);
    Heure h2 = Heure(19,40,2);
    Heure err1 = Heure(-12,-8,-12);

    h1.affiche();
    h2.affiche();
    cout << "H1 > H2 : " << (h1 > h2) << endl;

    err1.affiche();
    cout << endl;

    Date d1 = Date(21,2,2024);
    Date d2 = Date(20,2,2024);

    d1.affiche();
    d2.affiche();

    Date err2 = Date(30, 2, 2024);
    err2.affiche();

    DateH dh1 = DateH(21,2,2024,20,9,5);
    DateH dh2 = DateH(20,2,2024,20,9,26);
    dh1.affiche();
    dh2.affiche();
    cout << "DH1 > DH2 : " << (dh1 > dh2) << endl;

    DateH j1 = DateH(1, 1, 2020, 0, 0, 0);
    DateH j2 = DateH(31, 12, 2019, 23, 59, 59);
    cout << "J1 > J2 : " << (j1 > j2) << endl;

    Heure hj1 = j1;
    Heure hj2 = j2;
    cout << "HJ1 > HJ2 : " << (hj1 > hj2) << endl;
    return 0;
}