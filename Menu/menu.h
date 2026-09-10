#ifndef MENU_H
#define MENU_H

#include <iostream>
using namespace std;

class Menu {
private:
    string nom;
    string *options;
    int nbOPtions;
    int longueurMax;

public:
    Menu(const string &_nom);

    void Menu();
    int Afficher();
    void AttendreAppuiTouche();


};

#endif // MENU_H
