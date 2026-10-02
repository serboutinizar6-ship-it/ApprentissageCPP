#include "compteClient.h"

CompteClient::CompteClient(string _nom, int _numero)
{
    nom = _nom;
    numero = _numero;
    compteBancaire = new CompteBancaire(0.0);
    compteEpargne = nullptr;
}

CompteClient::~CompteClient()
{
    if (compteBancaire != nullptr)
    {
        delete compteBancaire;
    }
    if (compteEpargne != nullptr)
    {
        delete compteEpargne;
    }
}

void CompteClient::OuvrirCompteEpargne()
{
    if (compteEpargne != nullptr)
    {
        cout << "Un compte epargne existe deja pour ce client !" << endl;
    }
    else
    {
        float soldeInitial, taux;
        cout << "Solde de depart : ";
        cin >> soldeInitial;
        cout << "Taux d'interet (ex: 3.0) : ";
        cin >> taux;

        compteEpargne = new CompteEpargne(soldeInitial, taux);
        cout << "Compte epargne ouvert avec succes !" << endl;
    }
}
