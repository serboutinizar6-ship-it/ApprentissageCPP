#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include "barre.h"

class BarreRectangle : public Barre
{

private:
    float longueurSection;
    float largeur;

public:
    BarreRectangle(const string &_reference, const int &_longueur, const int &_densite, string &_nom, const float &_longueurSection, const float &_largeur);

    float CalculerSection();
    float CalculerMasse();
};

#endif // BARRERECTANGLE_H
