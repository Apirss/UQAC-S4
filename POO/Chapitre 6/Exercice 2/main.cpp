#include <iostream>
#include "CompteBancaire.h"

using namespace std;

int main()
{
    CompteBancaire compte(100);
    try {
        compte.depot(50);
        cout << "Solde apres depot : " << compte.getSolde() << endl;
        compte.depot(-30);
    } catch (invalid_argument& e) {cerr << "Exception lors du depot : " << e.what() << endl;}
    try {
        compte.retrait(20); // Essayer de retirer 20
        cout << "Solde apres retrait : " << compte.getSolde() << endl;
        compte.retrait(200);
    } catch (range_error& e) {cerr << "Exception lors du retrait : " << e.what() << endl;}
    return 0;
}