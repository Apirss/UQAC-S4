//
// Created by Apirss on 26/01/2024.
//
#include <string>
using namespace std;

#ifndef VETEMENT_VETEMENT_H
#define VETEMENT_VETEMENT_H

class Vetement{
private:
    string nom;
    double prix;
    string taille;
    static int nombreVetements;
public:
    Vetement();
    Vetement(string nom, double prix, string taille);
    ~Vetement();
    string getNom() const;
    void setNom(string& nom);
    double getPrix() const;
    void setPrix(double prix);
    string getTaille() const;
    void setTaille(string& taille);
    static void afficherNombreVetements();
    void afficherDetails() const;
    friend void appliquerReduction(Vetement& v, double reduction);

};

#endif //VETEMENT_VETEMENT_H
