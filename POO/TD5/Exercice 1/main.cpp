#include <iostream>
#include <vector>
#include "MathFunction.h"
#include "QuadraticFunction.h"
#include "LinearFunction.h"
#include "CosFunction.h"
#include "SinFunction.h"

using namespace std;

int main()
{
    vector<MathFunction*> fonctions;
    fonctions.push_back(new LinearFunction(2,3));
    fonctions.push_back(new QuadraticFunction(2,3,4));
    fonctions.push_back(new SinFunction());
    fonctions.push_back(new CosFunction());

    double x = 4;
    for (MathFunction* f:fonctions)
    {
        cout << endl;
        f->display();
        cout << "Resultats : " << f->evaluate(x) << endl;
    }
    for (MathFunction* f:fonctions)
    {
        delete f;
    }
    fonctions.clear();
    return 0;
}