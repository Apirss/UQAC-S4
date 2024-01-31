#ifndef CHAPITRE3_H
#define CHAPITRE3_H

#include <string>
#include <iostream>
using namespace std;

class Article{
	private:
		string nom;
		double prix;
	public:
        Article(string n, double p);
		double getPrix() const;
		void setPrix(double p);
		void afficher() const;
};

class ArticleEnSolde : public Article{
private:
    int remise;
	public:
        ArticleEnSolde(string n, double p, int r);
		void setRemise(int r);
        double getPrix() const  ;
        void afficher() const;
};

#endif
