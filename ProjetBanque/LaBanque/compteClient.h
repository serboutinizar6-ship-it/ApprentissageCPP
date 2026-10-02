#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H

#include <iostream>
#include <string>
#include "comptebancaire.h"
#include "compteEpargne.h"

using namespace std;

/**
 * @brief Classe représentant un client ayant un compte bancaire et un compte épargne.
 */
class CompteClient
{
private:
    string nom;
    int numero;
    CompteBancaire *compteBancaire;
    CompteEpargne *compteEpargne;

public:
    CompteClient(string _nom, int _numero);
    ~CompteClient();

    void OuvrirCompteEpargne();
    void GererCompteBancaire();
    void GererCompteEpargne();
};

#endif // COMPTECLIENT_H