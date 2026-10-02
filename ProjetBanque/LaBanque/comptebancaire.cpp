#include "comptebancaire.h"

/**
 * @brief Constructeur de CompteBancaire
 */
CompteBancaire::CompteBancaire(float _solde)
{
    solde = _solde;
}

/**
 * @brief Destructeur de CompteBancaire
 */
CompteBancaire::~CompteBancaire()
{
}


void CompteBancaire::Deposer(float _montant)
{
    if (_montant > 0)
    {
        solde = solde + _montant;
    }
}


bool CompteBancaire::Retirer(float _montant)
{
    if (solde >= _montant && _montant > 0)
    {
        solde = solde - _montant;
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * @brief Retourne le solde actuel du compte
 */
float CompteBancaire::ConsulterSolde()
{
    return solde;
}