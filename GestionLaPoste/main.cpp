#include <iostream>
#include <string>
#include "emballage.h"

using namespace std;

int main()
{
    /*
    // --- Question 5 ---
    Emballage colis1("Souple", 1, 280, 210);
    Emballage *colis2 = new Emballage("XL", 7, 383, 250, 195);
    delete colis2;
    */

    // --- Question 7 ---
    Emballage *tab[5];

    for (int i = 0; i < 5; i++)
    {
        string format;
        int resistance, longueur, largeur, hauteur;

        cout << "Saisie emballage " << i + 1 << endl;
        cout << "Format : ";
        cin >> format;
        cout << "Resistance : ";
        cin >> resistance;
        cout << "Longueur : ";
        cin >> longueur;
        cout << "Largeur : ";
        cin >> largeur;
        cout << "Hauteur (0 si a plat) : ";
        cin >> hauteur;

        tab[i] = new Emballage(format, resistance, longueur, largeur, hauteur);
    }

    cout << endl << "--- Catalogue ---" << endl;
    for (int i = 0; i < 5; i++)
    {
        tab[i]->Visualiser();
    }

    // --- Question 8 ---
    Emballage colis1("M", 3, 230, 130, 100);
    Emballage colis2("L", 5, 315, 210, 157);
    Emballage colis3("M", 3, 230, 130, 100);

    if (colis1 < colis2)
    {
        cout << "colis1 est plus petit que colis2" << endl;
    }

    if (colis1 == colis3)
    {
        cout << "colis1 et colis3 sont identiques" << endl;
    }

    float volume = colis1;
    cout << "Volume de colis1 : " << volume << " cm3" << endl;

    for (int i = 0; i < 5; i++)
    {
        delete tab[i];
    }

    return 0;
}