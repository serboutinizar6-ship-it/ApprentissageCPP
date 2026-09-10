#include "menu.h"
#include <iostream>
#include <fstream>

using namespace std;


Menu::Menu(const string &_nom):nom(_nom), longueurMax(0)
{
    if(!fichierMenu.is_open())
    {
        cout << "Erreur de lecture du fichier " << nom << endl;
        nbOptions = 0;
    }
    else
    {
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(fichierMenu), istreambuf_iterator<char>(), '\n'));
        fichierMenu.seekg(0,ios::beg);
        int *options;
        char ligne[50];
        options = new string [nbOptions];

    }

    for(int i= 0; i < nbOptions;i++ ){
        if(getline(fichierMenu, ligne))
        {
            options[i] = ligne;
            if(static_cast<int>(ligne.length()) > longueurMax)
            {
                longueurMax = static_cast<int>(ligne.length());
            }
        }
    }
    fichierMenu.close();
}
