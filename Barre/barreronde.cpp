#include "barreronde.h"

using namespace std;

BarreRonde::BarreRonde(const string &_reference, int &_longueur, int &_densite, string &_nom, const float &_diametre)

{
    float BarreRonde::CalculerSection() {
        return (3.1415*diametre*diametre)/4;
    }

    float BarreRonde::CalculerMasse() {
        return GetLongueur() * CalculerSection() * GetDensite();
    }

}
