#include <iostream>
#include <string>
#include <vector>
#include "SmartphonePremium.h"
using namespace std;

int main()
{
    Application app1 = Application("J'ai des thunes bank", "Gestion Bancaire", 100);
    Application app2 = Application("Hacker", "EL HACKER", 1000);
    SmartphonePremium sp = SmartphonePremium("AzizPhone", 4444444, *new vector<Application>, true, false, false, 100, true);
    sp.ajouter_application(app1);
    sp.ajouter_application(app2);
    sp.affiche();
    return 0;
}