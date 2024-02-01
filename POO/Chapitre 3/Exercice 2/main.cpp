//
// Created by Apirss on 01/02/2024.
//

#include <string>
#include <iostream>
#include "PointCouleur.h"
using namespace std;

int main()
{
    PointCouleur p(3.4,5.6, "rouge");
    PointCouleur q(2.5, 8.4, "bleu");
    cout << "Objet p : " << endl;
    p.affiche();
    cout << "Objet q : " << endl;
    q.affiche();
    p = q;
    cout << "Apres l'affectation, l'objet p devient : "<<endl;
    p.affiche();
}