#include <string>
#include <iostream>
#include "PointColMasse.h"

using namespace std;

int main()
{
    PointColMasse pcm = PointColMasse(12, 100, 100, "Orange");
    pcm.afficher();
    return 0;
}