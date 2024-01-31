#include <string>
#include <iostream>
#include "compteur.h"

using namespace std;

void harmonique()
{
    int n;
    cout << "Entrez le nombre de termes :";
    cin >> n;
    float res = 0;
    for (int i = 1; i < n ; i++) {
        res += 1/float(i);
        std::cout << "1/" << i << " + ";
    }
    res += 1/float(n);
    cout << "1/" << n << endl;
    cout << "La somme de la serie jusqu'a " << n << " termes : " << res;
}

void ref_and_point(int a)
{
    cout << "Valeur a : " << a << endl;
    int& ref_a = a;
    int* p_a = &ref_a;
    cout << "Reference ref_a : " << ref_a << endl;
    cout << "Pointeur p_a : " << p_a << endl;
}

void swap_1(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

void swap_2(int* a, int* b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void exo4(int A[5], int size)
{
    for (int i = 0; i < size/2; ++i) {
        int* p1 = &A[i];
        int* p2 = &A[size -1 - i];
        swap_2(p1,p2);
    }
}

void exo5(int B[], int size)
{
    int negsize = 0;
    int plussize = 0;
    for (int i = 0; i < size; ++i) {
        if(B[i] < 0) {
            negsize++;
        }
        else {
            plussize++;
        }
    }
    int* plus = new int[plussize];
    int* minus = new int[negsize];
    int j = 0;
    int k = 0;
    for (int i = 0; i < size; ++i) {
        if(B[i] < 0) {
            minus[k] = B[i];
            k++;
        }
        else {
            plus[j] = B[i];
            j++;
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << plus[i] << " "; }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << minus[i] << " "; }

    delete[](plus);
    delete[](minus);
}

void compteur::Compteur()
{
    val = 0;
};
void compteur::incrementer()
{
    val++;
};
void compteur::decrementer()
{
    if (val > 0)
    {
        val--;
    }
};

int compteur::valeurCompteur()
{
    return val;
};

int main()
{
    cout << "Exercice 1" << endl;
    harmonique();
    cout << endl;

    cout << endl;
    cout << "Exercice 2" << endl << "Entrez l'entier :";
    int a;
    cin >> a;
    ref_and_point(a);

    cout << endl;
    cout << "Exercice 3" << endl << "Valeur 1 :";
    cin >> a;
    cout << "Valeur 2 :";
    int b;
    cin >> b;

    cout << "Before Swap 1 : a=" << a << " b=" << b << endl;
    swap_1(a,b);
    cout << "After Swap 1 : a=" << a << " b=" << b << endl;

    cout << "Before Swap 2 : a=" << a << " b=" << b << endl;
    swap_2(&a,&b);
    cout << "After Swap 2 : a=" << a << " b=" << b << endl;

    cout << "Exercice 4" << endl;
    int A[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++) {
        cout << A[i] << " "; }
    cout << endl;
    exo4(A, 5);
    for (int i = 0; i < 5; i++) {
        cout << A[i] << " "; }
    cout << endl;

    cout << "Exercice 5" << endl;
    int B[10] = {1,2,3,4,5, -1, -2, -3, -4, -5};
    exo5(B, sizeof(B)/ sizeof(B[0]));

    cout << endl;
    cout << "Exercice 6" << endl;
    compteur cptr;
    cout << "Valeur initiale du compteur : " << cptr.valeurCompteur() << endl;
    for (int i = 0; i < 20; i++) {
        cptr.incrementer();
    }
    cout << "Valeur apres incrementation : " << cptr.valeurCompteur() << std::endl;
    for (int i = 0; i < 10; i++) {
        cptr.decrementer();
    }
    cout << "Valeur apres decrementation : " << cptr.valeurCompteur() << endl;

    return 0;
}