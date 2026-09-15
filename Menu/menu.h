#ifndef MENU_H
#define MENU_H
#include <iostream>

using namespace std;

class Menu {
private:
    string nom;
    string *options;
    int nbOptions;
    int longueurMax;

public:
    Menu(const string &_nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();
};

#endif // MENU_H
