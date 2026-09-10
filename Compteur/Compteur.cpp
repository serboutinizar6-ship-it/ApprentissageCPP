#include "Compteur.h"


int Compteur::getValeur() const
{
    return valeur;
}

void Compteur::setValeur(int newValeur)
{
    valeur = newValeur;
}

int Compteur::getPas() const
{
    return pas;
}

void Compteur::setPas(int newPas)
{
    pas = newPas;
}

// Constructeur avec liste d'initialisation
Compteur::Compteur(const int _valeur, const int _pas)
    : valeur(_valeur), pas(_pas)
{
}

// Destructeur (vide mais présent pour respecter le modèle)
Compteur::~Compteur()
{
}


void Compteur::Incrementer()
{
    valeur += pas;
}


void Compteur::Decrementer()
{
    valeur -= pas;
}


void Compteur::Reinitialiser()
{
    valeur=0;
}


Compteur Compteur::operator+(const Compteur &_autre) const
{
    Compteur resultat;
    resultat.valeur = valeur + _autre.valeur;
    resultat.pas = pas;
    return resultat;
}


bool Compteur::operator==(const Compteur &_autre) const
{
    bool retour = false;
    if (valeur == _autre.valeur && pas == _autre.pas)
    {
        retour = true;
    }
    return retour;
}

// Fonction amie operator<<
ostream& operator<<(ostream &_flux, const Compteur &_cpt)
{
    _flux << "Compteur (valeur=" << _cpt.valeur << ", pas=" << _cpt.pas << ")";
    return _flux;
}




