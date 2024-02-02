//
// Created by chan on 02/02/24.
//

#include <iostream>
#include "Complexe.h";

int main () {
    Complexe a(4, 5);
    Complexe b(2, 3);
    a += b;
    a.afficher();
}