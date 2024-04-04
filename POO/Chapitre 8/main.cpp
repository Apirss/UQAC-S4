#include <iostream>
#include "Tableau.h"

int main()
{
    vector<int> elems = { 1, 2, 3, 4, 5 };
    Tableau<int> tableauInt(elems);
    int sommeInt = tableauInt.somme();
    cout << "La somme des entiers du tableau est : " << sommeInt << endl;
    tableauInt.ajouterElement(6);
    sommeInt = tableauInt.somme();
    cout << "Nouvelle somme des entiers du tableau est : " << sommeInt << endl;
    
    // Utilisation avec des doubles
    vector<double> elemsDouble = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    Tableau<double> tableauDouble(elemsDouble);
    double sommeDouble = tableauDouble.somme();
    cout << "La somme des doubles du tableau est : " << sommeDouble << endl;
    return 0;
}