//
// Created by chan on 02/02/24.
//

#include "TableauBorne.h"
using namespace std;

TableauBorne::TableauBorne(int _taille, float _inf, float _sup) : Tableau(_taille), inf(_inf), sup(_sup){}

float TableauBorne::operator[](int index) {
    if (index < 0 || index >= taille) {
        cerr << "Wrong Index in TableauBorne [] !" << endl;
        return 1;
    }
    return elements[index];
}

void TableauBorne::operator()(int index, float newVal) {
    if (index < 0 || index >= taille || newVal < inf || newVal > sup) {
        cerr << "Wrong Index in TableauBorne ()!" << endl;
        return;
    }
    elements[index] = newVal;
}


