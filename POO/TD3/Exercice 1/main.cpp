//
// Created by chan on 02/02/24.
//

#include <iostream>
#include "Derived1.h"
#include "Derived2.h"
using namespace std;

int main()
{
    //Objets
    Base b;
    b.display();
    Derived1 d1;
    d1.display();
    Derived2 d2;
    d2.display();

    //Pointeurs
    Base* b1= &b;
    b1->display();
    Base* derived1= &d1;
    derived1->display();
    Base* derived2 = &d2;
    derived2->display();
    return 0;
}