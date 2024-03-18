//
// Created by Apirss on 17/03/2024.
//

#include <iostream>
#include "MathFunction.h"
using namespace std;
#ifndef TD5_LINEARFUNCTION_H
#define TD5_LINEARFUNCTION_H

class LinearFunction : public MathFunction
{
private:
    double a,b;
public:
    LinearFunction(double _a,double _b) : a(_a), b(_b) {};
    double evaluate(double x) const override
    {
        return a*x + b;
    }
    void display() const override
    {
        cout << "Fonction Lineaire : f(x) = " << a << "x + " << b << endl;
    }
};

#endif //TD5_LINEARFUNCTION_H
