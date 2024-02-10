//
// Created by Apirss on 10/02/2024.
//

#ifndef EXERCICE_2_SMARTPHONE_H
#define EXERCICE_2_SMARTPHONE_H

#include <iostream>
#include <string>
#include <vector>
#include "Application.h"

using namespace std;

class Smartphone
{
private:
    string marque;
    int memoire;
    vector<Application> applications;
public:
    Smartphone() : applications(){marque = ""; memoire = 0;};
    Smartphone(string m, int mem, vector<Application> apps) : marque(m), memoire(mem), applications(apps){};
    void affiche() const
    {
        cout << "marque : " << marque << endl;
        cout << "memoire : " << memoire << endl;
        for (Application app : applications) {
            app.affiche();
        }
    }
    void ajouter_application(const Application& app)
    {
        applications.push_back(app);
    }
};

#endif //EXERCICE_2_SMARTPHONE_H
