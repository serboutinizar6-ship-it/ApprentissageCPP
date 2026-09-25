/**
 * @file main.cpp
 * @author NIZAR SERBOUTI
 * @date 2026-09-24
 * @version 1.0
 * @brief Programme des classes Barre et dérivées.
 */

#include <iostream>
#include "barre.h"
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"

using namespace std;

/**
 * @brief Affiche les caractéristiques d'une barre.
 * @param b Pointeur vers la barre à afficher.
 */
void AfficherBarre(const Barre *b)
{
    b->AfficherCaracteristiques();
    cout << endl;
}

/**
 * @brief Point d'entrée du programme.
 * @return 0 si tout s'est bien passé.
 */
int main()
{
    Barre barre("REF-001", "Barre simple", 10.0, 7.85);
    BarreRonde ronde("REF-002", "Barre ronde", 10.0, 7.85, 2.0);
    BarreRectangle rect("REF-003", "Barre rectangle", 10.0, 7.85, 3.0);
    BarreCarree carre("REF-004", "Barre carrée", 4.0, 7.85);

    AfficherBarre(&barre);
    AfficherBarre(&ronde);
    AfficherBarre(&rect);
    AfficherBarre(&carre);

    cout << "Section ronde     = " << ronde.CalculerSection() << endl;
    cout << "Masse ronde       = " << ronde.CalculerMasse() << endl;
    cout << "Section rectangle = " << rect.CalculerSection() << endl;
    cout << "Masse rectangle   = " << rect.CalculerMasse() << endl;
    cout << "Section carrée    = " << carre.CalculerSection() << endl;
    cout << "Masse carrée      = " << carre.CalculerMasse() << endl;

    return 0;
}