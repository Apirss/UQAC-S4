//
// Created by Apirss on 17/03/2024.
//

#include <iostream>
#include "MathFunction.h"
#include<cmath>
using namespace std;
#ifndef TD5_COSFUNCTION_H
#define TD5_COSFUNCTION_H

class CosFunction : public MathFunction
{
public:
    double evaluate(double x) const override
    {
        return cos(x);
    }
    void display() const override
    {
        cout << "Fonction Cosinus : f(x) = cos(x)" << endl;
    }
};

#endif //TD5_COSFUNCTION_H
