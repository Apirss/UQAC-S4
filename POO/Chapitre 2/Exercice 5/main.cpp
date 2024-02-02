//
// Created by chan on 02/02/24.
//

#include <iostream>
#include "Personne.h"
using namespace std;

int main()
{
    Personne personne1("Marc", 30, "médecin");
    Personne personne2("John", 25, "ingénieur en informatique");
    cout << "Informations de la personne : " << personne1;
    cout << "Informations de la personne : " << personne2;
}