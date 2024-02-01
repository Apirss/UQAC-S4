//
// Created by Apirss on 01/02/2024.
//
#include <iostream>
#include "ArticleEnSolde.h"

int main()
{
    Article article1("Ordinateur portable", 800.0);
    article1.afficher();

    ArticleEnSolde article2("Smartphone", 500.0, 20);
    article2.afficher();

    // Création d'un article
    Article article("Chaise", 250.50);
    article.afficher();
    // Création d'un article en solde
    ArticleEnSolde articleSolde("Table", 1000.30, 20);
    articleSolde.Article::afficher();
    articleSolde.afficher();

    return 0;
}
