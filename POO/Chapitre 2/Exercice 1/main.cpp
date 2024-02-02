//
// Created by chan on 02/02/24.
//
#include <iostream>
#include "Voiture.h"

using namespace std;

int main() {
    Voiture voiture1;
    cout << "Voiture 1 : ";
    voiture1.afficherDetails();

    Voiture voiture2(30);
    cout << "Voiture 2 : ";
    voiture2.afficherDetails();

    Voiture voiture3 = voiture2;
    cout << "Voiture 3 : ";
    voiture3.afficherDetails();

    Voiture voiture4 = move(voiture1);
    cout << "Voiture 4 : ";
    voiture4.afficherDetails();
    voiture4.augmenterVitesse(50);
    voiture4.afficherDetails();
    voiture4.diminuerVitesse(15);
    voiture4.afficherDetails();
}