#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"

class BarreRonde : public Barre
{

private:
    float diametre;

public:
    BarreRonde(const string &_reference, int &_longueur, int &_densite, string &_nom, const float &_diametre);
    float CalculerSection();
    float CalculerMasse();
    float getDiametre() const;
    void setDiametre(float _newDiametre);
};

#endif // BARRERONDE_H
