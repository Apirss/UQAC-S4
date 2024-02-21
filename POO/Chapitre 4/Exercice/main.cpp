#include <string>
#include <iostream>
#include <vector>
#include "Formes.h"
#include "Cercles.h"
#include "Carres.h"

using namespace std;

int main()
{
    vector<Formes*> formes;
    formes.push_back(new Cercles(10));
    formes.push_back(new Carres(15));

    for(Formes* f : formes)
    {
        f->affiche();
        cout << endl;
    }

    for(Formes* f : formes)
    {
        delete f;
    }
    return 0;
}