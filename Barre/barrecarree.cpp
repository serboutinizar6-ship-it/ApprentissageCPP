#include "barrecarree.h"

BarreCarree::BarreCarree(const string &_reference, const int &_longueur, const int &_densite, const string &_nom) {

    cote = -cote;
}

float BarreCarree::CalculerSection() {
    return cote * cote;
}

float BarreCarree::CalculerMasse() {
    return GetLongueur() * CalculerSection() * GetDensite();
}
