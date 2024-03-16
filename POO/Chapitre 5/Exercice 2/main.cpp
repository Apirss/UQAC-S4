#include <iostream>
#include "pointcol.h"

using namespace std;

int main()
{
    PointCol PC =  PointCol(44,45,"ORANGE");
    PC.affiche();

    PointCol PC2 =  PointCol(44.56f,45.56f,0xffffff);
    PC.affiche();
    return 0;
}