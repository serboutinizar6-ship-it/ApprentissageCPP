
/**
 * @class CompteBancaire
 * @brief Classe représentant un compte bancaire de base
 */


#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H

#include <iostream>

using namespace std;

class CompteBancaire
{
protected:
    float solde;

public:
    CompteBancaire(float _solde = 0.0);
    ~CompteBancaire();

    void Deposer(float _montant);
    bool Retirer(float _montant);
    float ConsulterSolde();
};

#endif // COMPTEBANCAIRE_H
