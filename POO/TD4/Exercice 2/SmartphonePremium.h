//
// Created by Apirss on 10/02/2024.
//

#ifndef EXERCICE_2_SMARTPHONEPREMIUM_H
#define EXERCICE_2_SMARTPHONEPREMIUM_H

#include <iostream>
#include <string>
#include "Smartphone.h"
#include "Connectivite.h"

using namespace std;

class SmartphonePremium : public virtual Smartphone, public virtual Connectivite
{
protected:
    int autonomie;
    bool resistanceEau;
public:
    SmartphonePremium() : Smartphone(), Connectivite(), autonomie(0), resistanceEau(false){};
    SmartphonePremium(string marque, int memoire, vector<Application> apps, bool w, bool b, bool g,int a, bool r) : Smartphone(marque, memoire, apps),
                                                                                                                       Connectivite(w, b, g), autonomie(a), resistanceEau(r){};
    void affiche() const
    {
        cout << "Autonomie : " << autonomie << endl;
        cout << "ResistanceEau : " << resistanceEau << endl;
        Smartphone::affiche();
        Connectivite::affiche();
    }
};

#endif //EXERCICE_2_SMARTPHONEPREMIUM_H
