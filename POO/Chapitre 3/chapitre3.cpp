#include <iostream>
#include "chapitre3.h"


using namespace std;

Article::Article(string n, double p)  : nom(n),prix(p){};

double Article::getPrix() const{
    return prix;
}

void Article::setPrix(double p) {
    prix = p;
}

void Article::afficher() const{
    cout << "Prix : " << prix << endl;
}

ArticleEnSolde::ArticleEnSolde(string n, double p, int r)  : Article(n, p), remise(r){}

void ArticleEnSolde::setRemise(int r) {
    remise = r;
}

double ArticleEnSolde::getPrix() const {
    return Article::getPrix() - Article::getPrix() * remise/100;
}

void ArticleEnSolde::afficher() const {
    Article::afficher();
    cout << "Remise : " << remise << "%" << std::endl;
}

int main()
{
    Article article1("Ordinateur portable", 800.0);
    article1.afficher();

    ArticleEnSolde article2("Smartphone", 500.0, 20);
    article2.afficher();
    return 0;
}