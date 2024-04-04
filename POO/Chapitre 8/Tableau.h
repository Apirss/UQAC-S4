//
// Created by chan on 04/04/24.
//

#ifndef CHAPITRE_8_TABLEAU_H
#define CHAPITRE_8_TABLEAU_H

#include <vector>

using namespace std;

template<class T>
class Tableau {
private:
    vector<T> elts;
public:
    Tableau(vector<T> table) : elts(table){}
    T somme() const
    {
        T sum = T();
        for(const T& elt : elts)
        {
            sum += elt;
        }
        return sum;
    }

    void ajouterElement(const T& elt)
    {
        elts.push_back(elt);
    }

    int taille() const
    {
        return elts.size();
    }
};

#endif //CHAPITRE_8_TABLEAU_H
