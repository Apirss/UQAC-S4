//
// Created by chan on 02/02/24.
//

#ifndef EXERCICE_1_DERIVED2_H
#define EXERCICE_1_DERIVED2_H

#include <iostream>
#include "Base.h"
using namespace std;

class Derived2 : public Base {
public:
    void display() override
    {
        cout << "Derived2\n";
    }
};

#endif //EXERCICE_1_DERIVED2_H
