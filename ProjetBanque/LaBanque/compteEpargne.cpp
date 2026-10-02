#include "compteEpargne.h"

/**
 * @brief Constructeur de CompteEpargne
 */
CompteEpargne::CompteEpargne(float _solde, float _taux) : CompteBancaire(_solde)
{
    tauxInterets = _taux;
}

/**
 * @brief Destructeur de CompteEpargne
 */
CompteEpargne::~CompteEpargne() {
}


float CompteEpargne::CalculerInterets()
{
    return solde * (tauxInterets / 100.0);
}

void CompteEpargne::ModifierTaux(float _nouveauTaux)
{
    tauxInterets = _nouveauTaux;
}