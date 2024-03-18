//
// Created by Apirss on 17/03/2024.
//

#include <iostream>
#include "MathFunction.h"
#include<cmath>
using namespace std;
#ifndef TD5_SINFUNCTION_H
#define TD5_SINFUNCTION_H

class SinFunction : public MathFunction
{
public:
    double evaluate(double x) const override
    {
        return sin(x);
    }
    void display() const override
    {
        cout << "Fonction Sinus : f(x) = sin(x)" << endl;
    }
};

#endif //TD5_SINFUNCTION_H
