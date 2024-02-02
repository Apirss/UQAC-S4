//
// Created by chan on 02/02/24.
//

#ifndef EXERCICE_2_LIVRE_H
#define EXERCICE_2_LIVRE_H

#include<string>

using namespace std;

class Livre {
private:
    string titre;
    string auteur;
    int idLivre;
public:
    Livre();
    Livre(string, string, int);
    int getId();
    void afficherDetails();
};

#endif //EXERCICE_2_LIVRE_H
