//
// Created by chan on 27/03/24.
//

#ifndef EXERCICE_4_VECTEUR3DEXCEPTION_H
#define EXERCICE_4_VECTEUR3DEXCEPTION_H

#include <iostream>
#include <string>
using namespace std;

class Vecteur3DException
{
private:
    string message;
public:
    Vecteur3DException(string m) :message(m){};
    string what() const
    {
        return message;
    }
};
#endif //EXERCICE_4_VECTEUR3DEXCEPTION_H
