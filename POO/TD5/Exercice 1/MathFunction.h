//
// Created by Apirss on 17/03/2024.
//

using namespace std;
#ifndef TD5_MATHFUNCTION_H
#define TD5_MATHFUNCTION_H

class MathFunction
{
public:
    virtual double evaluate(double x) const = 0;
    virtual void display() const = 0;
    virtual ~MathFunction() {};
};

#endif //TD5_MATHFUNCTION_H
