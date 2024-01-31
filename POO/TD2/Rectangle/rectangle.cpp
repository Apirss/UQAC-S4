#include <string>
#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle(int larg, int haut): largeur(larg), hauteur(haut){}

int Rectangle::calculerAire() const{
    return largeur * hauteur;
}

void afficherInformations(Rectangle rect)
{
    cout << "*Rectangle*" << endl;
    cout << "Largeur : " << rect.largeur << endl;
    cout << "Hauteur : " << rect.hauteur << endl;
}

Rectangle Rectangle::operator*(int facteur) const {
    return {largeur*facteur, hauteur*facteur};
}

int main()
{
    Rectangle rect(4,5);
    afficherInformations(rect);
    cout << "Aire du Recctangle : " << rect.calculerAire() << endl;
    Rectangle rectRedimensionne = rect * 2;
    cout << "Apres la surcharge de l'operateur * :" << endl;
    afficherInformations(rectRedimensionne);
    cout << "Aire du rectangle redimensionne : " << rectRedimensionne.calculerAire() <<
         endl;

    return 0;
}