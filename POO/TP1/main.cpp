#include <string>
#include <iostream>
#include "franceisbetter.h"

using namespace std;

void Vol::afficher_billets()
{
    cout << "Numero de Vol : " << lire_numero_vol() << endl;
    cout << "Capacite : " << capacite << endl;
    int i = 1;
    for(Passager& p : passagers)
    {
        cout << endl;
        cout << "*Billet Numero : " << i << "*" << endl;
        cout << "*Passager*" << endl;
        i++;
        p.afficher_informations();
        cout << endl;
    }
}

void Vol::ajouter_passager(const Passager p)
{
    if(passagers.size() >= capacite)
    {
        cout << "Le vol est plein !" << endl;
    }
    else
    {
        passagers.push_back(p);
    }
}

void Vol::annuler_billet(int id) {
    int i = 0;
    for (Passager& p : passagers) {
        if(p.id == id)
        {
            passagers.erase(passagers.begin()+i);
            break;
        }
        i++;
    }
}

int Vol::nombre_passagers()
{
    return passagers.size();
}

void Vol::fixer_numero_vol(int num) {
    numero_vol = num;
}
int Vol::lire_numero_vol() {
    return numero_vol;
}

void Passager::afficher_informations()
{
    cout << "Name : " << nom << endl;
    cout << "ID : " << id << endl;
    cout << "Siege : " << siege << endl;
    cout << "Prix : " << prix << endl;
}

Vol::Vol(int capacity, int* nombre_vol) :capacite(capacity){
    (*nombre_vol)++;
}

int main()
{
    int nombre_vol = 0;
    Vol vol1(500, &nombre_vol);
    vol1.fixer_numero_vol(11111);

    Passager p1;
    p1.nom = "Louis";
    p1.id = 1;
    p1.prix = 500;
    p1.siege = 11;
    vol1.ajouter_passager(p1);

    Passager p2;
    p2.nom = "Godric";
    p2.id = 2;
    p2.prix = 501;
    p2.siege = 12;
    vol1.ajouter_passager(p2);

    Passager p3;
    p3.nom = "Godricke";
    p3.id = 3;
    p3.prix = 502;
    p3.siege = 13;
    vol1.ajouter_passager(p3);

    Passager p4;
    p4.nom = "Phiphi";
    p4.id = 4;
    p4.prix = 503;
    p4.siege = 14;
    vol1.ajouter_passager(p4);

    Passager p5;
    p5.nom = "Philippe";
    p5.id = 5;
    p5.prix = 504;
    p5.siege = 15;
    vol1.ajouter_passager(p5);

    Passager p6;
    p6.nom = "Poprick";
    p6.id = 6;
    p6.prix = 505;
    p6.siege = 16;
    vol1.ajouter_passager(p6);

    Passager p7;
    p7.nom = "Parco";
    p7.id = 7;
    p7.prix = 506;
    p7.siege = 17;
    vol1.ajouter_passager(p7);

    Passager p8;
    p8.nom = "Marco";
    p8.id = 8;
    p8.prix = 507;
    p8.siege = 18;
    vol1.ajouter_passager(p8);

    Passager p9;
    p9.nom = "Axel";
    p9.id = 9;
    p9.prix = 508;
    p9.siege = 19;
    vol1.ajouter_passager(p9);

    Passager p10;
    p10.nom = "Axelle";
    p10.id = 10;
    p10.prix = 509;
    p10.siege = 20;
    vol1.ajouter_passager(p10);
    vol1.afficher_billets();

    cout << "Transfert vers vol 2" << endl;

    Vol vol2(200, &nombre_vol);
    vol2.fixer_numero_vol(22222);
    vol1.annuler_billet(p1.id);
    vol1.annuler_billet(p2.id);
    vol1.annuler_billet(p3.id);
    vol1.annuler_billet(p4.id);
    vol1.annuler_billet(p5.id);
    vol1.annuler_billet(p6.id);
    vol1.annuler_billet(p7.id);
    vol1.annuler_billet(p8.id);
    vol1.annuler_billet(p9.id);
    vol1.annuler_billet(p10.id);

    vol2.ajouter_passager(p1);
    vol2.ajouter_passager(p2);
    vol2.ajouter_passager(p3);
    vol2.ajouter_passager(p4);
    vol2.ajouter_passager(p5);
    vol2.ajouter_passager(p6);
    vol2.ajouter_passager(p7);
    vol2.ajouter_passager(p8);
    vol2.ajouter_passager(p9);
    vol2.ajouter_passager(p10);

    cout << "Vol 1" << endl;
    cout << "Nombre passager : " << vol1.nombre_passagers() << endl;
    vol1.afficher_billets();

    cout << "Vol 2" << endl;
    cout << "Nombre passager : " << vol2.nombre_passagers() << endl;
    vol2.afficher_billets();

    cout << "Nombre de vols : " << nombre_vol << endl;
    return 0;
}