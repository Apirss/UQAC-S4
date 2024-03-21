//
// Created by Apirss on 21/03/2024.
//

#ifndef CHAPITRE_6_EXCEPTION_H
#define CHAPITRE_6_EXCEPTION_H

#include <iostream>

using namespace std;

class err_same{};
class err_constructor
{
private:
    int num;
public:
    err_constructor(int n) : num(n){};
    int get_num(){return num;}
};
#endif //CHAPITRE_6_EXCEPTION_H
