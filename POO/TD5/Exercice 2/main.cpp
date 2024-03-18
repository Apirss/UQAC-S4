#include <iostream>
#include <vector>
#include <iostream>
#include "Dessin.h"
#include "Cercle.h"
#include "Carre.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Dessin dessin;
    dessin.ajouteFigure(Cercle(4.4));
    dessin.ajouteFigure(Carre(44));
    dessin.ajouteFigure(Triangle(4.4,4));
    cout << "------- Affichage du dessin : " << endl;
    dessin.affiche();
    cout << "------- Fin affichage." << endl;
    return 0;
}