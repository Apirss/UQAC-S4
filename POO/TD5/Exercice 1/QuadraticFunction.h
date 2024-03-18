//
// Created by Apirss on 17/03/2024.
//

#include <iostream>
#include "MathFunction.h"
using namespace std;
#ifndef TD5_QUADRATICFUNCTION_H
#define TD5_QUADRATICFUNCTION_H

class QuadraticFunction : public MathFunction
{
private:
    double a,b,c;
public:
    QuadraticFunction(double _a, double _b, double _c) : a(_a), b(_b), c(_c){};
    double evaluate(double x) const override
    {
        return a*x*x + b*x + c;
    }
    void display() const override
    {
        cout << "Fonction Quadratique : f(x) = " << a << "x^2 + " << b << "x + " << c << endl;
    }
};

#endif //TD5_QUADRATICFUNCTION_H
