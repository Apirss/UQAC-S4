//
// Created by chan on 02/02/24.
//

#include <iostream>
#include "Bibliotheque.h"

int main() {
// Création d'une bibliothèque pouvant contenir jusqu'à 5 livres
    Bibliotheque bibliotheque(5);
// Ajout de quelques livres
    bibliotheque.ajouterLivre(Livre("Statistique et probabilites", "Jean-Pierre Lecoutre", 157));
    bibliotheque.ajouterLivre(Livre("Mathématiques pour la robotique", "Louis Gacôgne", 999));
    bibliotheque.ajouterLivre(Livre("Ondes et vibrations", "Ronan Lefort", 103));
    bibliotheque.afficherDetails();
// Supprimer un livre
    bibliotheque.supprimerLivre(999);
    cout << "***** Apres suppression ***** " << endl;
    bibliotheque.afficherDetails();
    return 0;
}