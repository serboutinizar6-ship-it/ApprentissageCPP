#ifndef COMPTEUR_H
#define COMPTEUR_H

#include <iostream>
using namespace std;

class Compteur
{
private:
    int valeur;
    int pas;

public:
    // Constructeur avec valeurs par défaut
    Compteur(const int _valeur = 0, const int _pas = 1);

    // Destructeur
    ~Compteur();

    // Méthodes
    void Incrementer();
    void Decrementer();
    void Reinitialiser();


    // Surcharge d'opérateurs
    Compteur operator+(const Compteur &_autre) const;
    bool operator==(const Compteur &_autre) const;

    // Fonction amie
    friend ostream& operator<<(ostream &_flux, const Compteur &_cpt);
    int getValeur() const;
    void setValeur(int newValeur);
    int getPas() const;
    void setPas(int newPas);
};

#endif // COMPTEUR_H