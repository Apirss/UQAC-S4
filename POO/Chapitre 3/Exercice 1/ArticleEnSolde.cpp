//
// Created by Apirss on 01/02/2024.
//

#include <string>
#include "ArticleEnSolde.h"

ArticleEnSolde::ArticleEnSolde(string n, double p, int r)  : Article(n, p), remise(r){}

void ArticleEnSolde::setRemise(int r) {
    remise = r;
}

double ArticleEnSolde::getPrix() const {
    return Article::getPrix() * (100 - remise)/100;
}

void ArticleEnSolde::afficher() const {
    cout << "Prix original: " << Article::getPrix();
    cout << ", Remise: " << remise << "%, Prix avec remise: " << getPrix() << endl;
}