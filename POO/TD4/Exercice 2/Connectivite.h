//
// Created by Apirss on 10/02/2024.
//

#ifndef EXERCICE_2_CONNECTIVITE_H
#define EXERCICE_2_CONNECTIVITE_H

#include <iostream>
#include <string>
using namespace std;

class Connectivite
{
private:
    bool wifi;
    bool bluetooth;
    bool support5G;
public:
    Connectivite() : wifi(false), bluetooth(false), support5G(false){}
    Connectivite(bool w, bool b, bool g) : wifi(w), bluetooth(b), support5G(g){};
    void affiche() const
    {
        cout << "Wifi : " << wifi << endl;
        cout << "Bluetooth : " << bluetooth << endl;
        cout << "Support5G : " << support5G << endl << endl;
    }
};

#endif //EXERCICE_2_CONNECTIVITE_H
