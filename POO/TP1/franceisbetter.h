//
// Created by Apirss on 26/01/2024.
//
#include <vector>

using namespace std;

#ifndef TP1_FRANCEISBETTER_H
#define TP1_FRANCEISBETTER_H

class Passager
{
public:
    string nom;
    int id;
    int siege;
    int prix;
    void afficher_informations();
};

class Vol
{
private:
    int numero_vol;
    int capacite;
    vector<Passager> passagers;
public:
    Vol(int capacity, int* nombre_vol);
    void afficher_billets();
    void ajouter_passager(const Passager p);
    void annuler_billet(int id);
    int nombre_passagers();
    void fixer_numero_vol(int num);
    int lire_numero_vol();
};

#endif //TP1_FRANCEISBETTER_H
