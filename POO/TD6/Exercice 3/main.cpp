#include <iostream>
#include "Array.h"

using namespace std;


int main()
{
    Array<int, 10> a({ 1, 4, 7, 10, 5, 2});
    Array<int, 10> b({ 1, 8, 6});
    Array<string, 3> tab{ "POO", "8PRO128", "Groupe 1"};
    Array<int, 10> k;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "tab : " << tab << endl;
    cout << "k (constructeur par defaut) : " << k << endl;
    auto& c = a; // Copie de a
    cout << "c (apres avoir recu a) : " << c << endl;
    auto& d = b; // Copie de b
    cout << "d (apres avoir recu b) : " << d << endl;
    d = move(c); // Déplacement de c vers d
    cout << "d (apres avoir recu c) : " << d << endl;
    cout << endl << "Test de la surdefinition de l'operateur [] : " << endl;
    cout << " ==> a[2] : " << a[2] << endl;
    cout << " ==> tab[1] : " << tab[1] << endl << endl;

    return 0;
}