#include "barrerectangle.h"

BarreRectangle::BarreRectangle(const string &_reference, const int &_longueur, const int &_densite, string &_nom, const float &_longueurSection, const float &_largeur) {

    longueurSection = _longueurSection;
    largeur = _largeur;

}

float BarreRectangle::CalculerSection() {
    return longueurSection * largeur;
}

float BarreRectangle::CalculerMasse() {
    return GetLongueur() * CalculerSection() * GetDensite();
}
