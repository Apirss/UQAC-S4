#include <iostream>
#include "Vecteur3DException.h"
#include "Vecteur3D.h"

using namespace std;

void normaliserVecteur3D(Vecteur3D& v)
{
    try
    {
        v.normaliser();
    }
    catch(Vecteur3DException& e)
    {
        cout << "Erreur Normalisation : " << e.what() << endl;
        throw;
    }
}
int main()
{
    cout << "Test 1 :" << endl;
    Vecteur3D vecteur1(0, 0, 0); // Ceci devrait provoquer une exception
    try {
        normaliserVecteur3D(vecteur1);
    }
    catch (Vecteur3DException& e) {
        cout << "Exception capturee dans main : " << e.what() << endl;
    }
    cout << "Test 2 :" << endl;
    Vecteur3D vecteur2(1, 2, 8);
    try {
        normaliserVecteur3D(vecteur2);
    }
    catch (Vecteur3DException& e) {
        cout << "Exception capturee dans main : " << e.what() << endl;
    }
    return 0;
}