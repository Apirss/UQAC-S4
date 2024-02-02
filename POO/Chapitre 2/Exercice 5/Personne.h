//
// Created by chan on 02/02/24.
//

#ifndef EXERCICE_5_PERSONNE_H
#define EXERCICE_5_PERSONNE_H

#include<string>
#include<iostream>
using namespace std;

class Personne {
    string nom;
    int age;
    string profession;
public:
    Personne();
    Personne(string, int, string);
    friend ostream& operator<<(ostream&,const Personne&);
};

#endif //EXERCICE_5_PERSONNE_H
