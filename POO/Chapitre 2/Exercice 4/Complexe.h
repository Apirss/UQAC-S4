//
// Created by chan on 02/02/24.
//

#ifndef EXERCICE_4_COMPLEXE_H
#define EXERCICE_4_COMPLEXE_H

class Complexe {
private:
    double reel, imag;
public:
    Complexe();
    Complexe(double, double);
    Complexe operator+=(const Complexe&);
    void afficher();
};

#endif //EXERCICE_4_COMPLEXE_H
