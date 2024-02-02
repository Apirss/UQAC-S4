//
// Created by chan on 02/02/24.
//

#include<iostream>
#include "Complexe.h"

using namespace std;

Complexe::Complexe() {
    reel = 0;
    imag = 0;
};
Complexe::Complexe(double reel, double imag) {
    this->reel = reel;
    this->imag = imag;
};
Complexe Complexe::operator+=(const Complexe& nbreComplexe) {
    this->reel += nbreComplexe.reel;
    this->imag += nbreComplexe.imag;
    return *this;
};
void Complexe::afficher(){
    cout << "Nombre complexe = " << reel << " + " << imag << "i";
};