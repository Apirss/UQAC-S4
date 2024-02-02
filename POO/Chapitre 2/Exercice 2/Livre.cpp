//
// Created by chan on 02/02/24.
//

#include<string>
#include<iostream>
#include "Livre.h"

Livre::Livre()
{
    titre = "";
    auteur = "";
    idLivre = 0;
}

Livre::Livre(string t, string a, int id) :titre(t), auteur(a), idLivre(id) {}

void Livre::afficherDetails(){
    cout << "Titre : "<< titre<< " | Auteur : "<<
         auteur << " | id : "<< idLivre << endl;
}

int Livre::getId()
{ return idLivre; };