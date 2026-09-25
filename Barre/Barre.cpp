#include <iostream>
#include "barre.h"

using namespace std;


Barre::Barre(const string &_reference, int _longueur, int _densite, const string &_nom) {
    reference = _reference;
    longueur = _longueur;
    densite = _densite;
    nom = _nom;
}



void Barre::AfficherCaracteristiques() {
    cout << "--- Caractéristiques de la barre ---" << endl;
    cout << "Référence : " << reference << endl;
    cout << "Longueur : " << longueur << " m" << endl;
    cout << "Densité : " << densite << endl;
    cout << "Alliage : " << nomAlliage << endl;
    cout << "Alliage : " << nomAlliage << endl;

}

int Barre::GetLongueur() const {
    return longueur;
}

int Barre::GetDensite()const {
    return densite;
}

