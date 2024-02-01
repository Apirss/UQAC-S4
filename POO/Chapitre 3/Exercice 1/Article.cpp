#include <iostream>
#include "Article.h"


using namespace std;

Article::Article(string n, double p)  : nom(n),prix(p) {}

double Article::getPrix() const{
    return prix;
}

void Article::setPrix(double p) {
    prix = p;
}

void Article::afficher() const{
    std::cout << "Article: " << nom << ", Prix: " << prix << endl;
}