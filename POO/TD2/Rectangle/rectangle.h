//
// Created by Apirss on 26/01/2024.
//

using namespace std;

#ifndef TD2_RECTANGLE_H
#define TD2_RECTANGLE_H

class Rectangle{
private:
    int largeur;
    int hauteur;
public:
    Rectangle(int larg, int haut);
    int calculerAire() const;
    friend void afficherInformations(Rectangle rect);
    Rectangle operator* (int facteur) const;
};
#endif //TD2_RECTANGLE_H
