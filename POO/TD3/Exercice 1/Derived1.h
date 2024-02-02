//
// Created by chan on 02/02/24.
//

#ifndef EXERCICE_1_DERIVED1_H
#define EXERCICE_1_DERIVED1_H

#include <iostream>
#include "Base.h"
using namespace std;

class Derived1 : public Base {
public:
    void display() override
    {
        cout << "Derived1\n";
    }
};

#endif //EXERCICE_1_DERIVED1_H
