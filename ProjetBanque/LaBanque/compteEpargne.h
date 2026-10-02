#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "comptebancaire.h"

/**
 * @brief Classe représentant un compte épargne.
 */
class CompteEpargne : public CompteBancaire
{
private:
    float tauxInterets;

public:
    CompteEpargne(float _solde = 0.0, float _taux = 3.0);
    ~CompteEpargne();

    float CalculerInterets();
    void ModifierTaux(float _nouveauTaux);
};

#endif // COMPTEEPARGNE_H
