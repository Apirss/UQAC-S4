//
// Created by Apirss on 26/01/2024.
//

#include "Vetement.h"
#include "Inventaire.h"
#include <iostream>
using namespace std;

int main() {
    Vetement v1("T-shirt", 50.0, "M");
    Vetement v2("Pantalon", 120.0, "L");
    Vetement v3("Chandail", 40, "XL");
    Vetement::afficherNombreVetements();
    Inventaire inventaire;
    inventaire.ajouterVetement(v1);
    inventaire.ajouterVetement(v2);
    inventaire.ajouterVetement(v3);
    inventaire.afficherInventaire();
    cout << "Vetement le plus cher dans l'inventaire : " << endl;
    Vetement PlusCher = comparerPrix(inventaire);
    PlusCher.afficherDetails();
    inventaire.enleverVetement(v3);
    cout << "Inventaire apres la suppression d'un article : " << endl;
    inventaire.afficherInventaire();
    appliquerReduction(v2, 25);//25%
    cout << "Prix des vetements v2 apres une reduction de 25% : " << endl;
    v2.afficherDetails();
    return 0;
}