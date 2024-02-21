//
// Created by chan on 21/02/24.
//

#ifndef EXERCICE_FORMES_H
#define EXERCICE_FORMES_H

class Formes
{
public:
    virtual void affiche() const = 0;
    virtual ~Formes(){};
    virtual int Perimetre() const = 0;
    virtual int Aire() const = 0;
};

#endif //EXERCICE_FORMES_H
