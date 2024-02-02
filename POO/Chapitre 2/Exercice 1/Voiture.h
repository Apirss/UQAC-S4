//
// Created by chan on 02/02/24.
//

#ifndef EXERCICE_1_VOITURE_H
#define EXERCICE_1_VOITURE_H

class Voiture {
private:
    double vitesse;
public:
// Différents constructeurs
    Voiture(); // Constructeur par défaut
    Voiture(double); // Constructeur paramétré
    Voiture(Voiture &); // Constructeur par copie
    Voiture(Voiture &&); // Constructeur de déplacement
    ~Voiture(); // Destructeur
    void augmenterVitesse(double);
    void diminuerVitesse(double);
    void afficherDetails();
};

#endif //EXERCICE_1_VOITURE_H
