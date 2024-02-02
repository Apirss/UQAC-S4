#include <iostream>
#include "Voiture.h"

using namespace std;

Voiture::Voiture() { vitesse = 0; }
Voiture::Voiture(double vitesse_init) {vitesse = vitesse_init;}
Voiture::Voiture(Voiture &voiture1) {vitesse = voiture1.vitesse;}
Voiture::Voiture(Voiture &&voiture2)
{
    vitesse = voiture2.vitesse;
// La vitesse de l'objet source est mise à zéro pour indiquer qu'elle a été "déplacée"
    voiture2.vitesse = 0;
}
Voiture::~Voiture() { cout << "Objet detruit" << endl;}

void Voiture::augmenterVitesse(double v) { vitesse+=v; }

void Voiture::diminuerVitesse(double v)
{
    if (vitesse-v>0)
    {
        vitesse-= v;
    }
    else
    {
        vitesse = 0;
    }
}

void Voiture::afficherDetails()
{
    cout << "Vitesse actuelle : " << vitesse << " km/h \n";
}