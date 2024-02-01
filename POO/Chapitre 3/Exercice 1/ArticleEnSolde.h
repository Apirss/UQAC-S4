//
// Created by Apirss on 01/02/2024.
//

#ifndef CHAPITRE_3_ARTICLEENSOLDE_H
#define CHAPITRE_3_ARTICLEENSOLDE_H

#include <string>
#include "Article.h"

using namespace std;

class ArticleEnSolde : public Article{
private:
    int remise;
public:
    ArticleEnSolde(string n, double p, int r);
    void setRemise(int r);
    double getPrix() const;
    void afficher() const;
};

#endif //CHAPITRE_3_ARTICLEENSOLDE_H
