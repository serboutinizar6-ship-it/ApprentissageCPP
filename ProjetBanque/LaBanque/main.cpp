#include <iostream>
#include "compteClient.h"

using namespace std;

int main()
{
    CompteClient client1("Albert", 1);
    Menu menuClient("client.txt");

    int choix = 0;

    while (choix != 4)
    {
        choix = menuClient.Afficher();

        if (choix == 1)
        {
            client1.OuvrirCompteEpargne();
        }
        else if (choix == 2)
        {
            client1.GererCompteBancaire();
        }
        else if (choix == 3)
        {
            client1.GererCompteEpargne();
        }
    }

    return 0;
}