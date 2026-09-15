#include "menu.h"
#include <iostream>
#include <fstream>
#include <limits>
#include <iomanip>
#include <algorithm>

using namespace std;

Menu::Menu(const string &_nom) : nom(_nom), options(nullptr), nbOptions(0), longueurMax(0)
{
    ifstream fichierMenu(nom);

    if (!fichierMenu.is_open())
    {
        cout << "Erreur de lecture du fichier " << nom << endl;
        nbOptions = 0;
    }
    else
    {
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(fichierMenu), istreambuf_iterator<char>(), '\n'));

        fichierMenu.seekg(0, ios::beg);

        options = new string[nbOptions];

        string ligne;
        for (int i = 0; i < nbOptions; i++)
        {
            if (getline(fichierMenu, ligne))
            {
                options[i] = ligne;
                if (static_cast<int>(ligne.length()) > longueurMax)
                {
                    longueurMax = static_cast<int>(ligne.length());
                }
            }
        }
        fichierMenu.close();
    }
}

Menu::~Menu()
{
    if (options != nullptr)
    {
        delete[] options;
        options = nullptr;
    }
}

int Menu::Afficher()
{
    system("clear");
    cout << "=== MENU ===" << endl;
    for (int i = 0; i < nbOptions; ++i)
    {
        cout << i + 1 << " - " << options[i] << endl;
    }
    cout << "Votre choix : ";

    int choix = -1;
    if (!(cin >> choix))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        choix = -1;
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return choix;
}

void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin, uneChaine);
    system("clear");
}
