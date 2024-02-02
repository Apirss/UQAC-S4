//
// Created by chan on 02/02/24.
//

#include "TableauBorne.h"
#include "Tableau.h"
using namespace std;

int main()
{
    Tableau tableau1(5);

    for (int i = 0; i < 5; ++i) {
        tableau1[i] = i * 2.5;
    }

    std::cout << "Tableau1 avant modification :\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << tableau1[i] << " ";
    }
    std::cout << "\n";

    tableau1[2] = 10.0; // Modification autorisée via l'opérateur []

    std::cout << "Tableau1 après modification :\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << tableau1[i] << " ";
    }
    std::cout << "\n\n";

    // Exemple d'utilisation de la classe TableauBorne
    TableauBorne tableauBorne1(3, 0.0, 10.0);

    for (int i = 0; i < 3; ++i) {
        tableauBorne1(i, i * 3.0);
    }

    std::cout << "TableauBorne1 avant modification :\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << tableauBorne1[i] << " ";
    }
    std::cout << "\n";

    tableauBorne1(1, 9.0); // Modification autorisée via l'opérateur ()

    std::cout << "TableauBorne1 après modification :\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << tableauBorne1[i] << " ";
    }
    std::cout << "\n";

    // Tentative de modification non autorisée
    //tableauBorne1[2] = 20.0; // Doit afficher un message d'erreur

    return 0;
}