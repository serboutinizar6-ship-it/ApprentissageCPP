#ifndef EMBALLAGE_H
#define EMBALLAGE_H

#include <string>

using namespace std;


class Emballage
{
private:
    string format;
    int resistanceMax;
    int longueur;
    int largeur;
    int stock;
    int hauteur;

public:
    Emballage(string format, int resistanceMax, int Longueur, int largeur, int hauteur = 0);
    ~Emballage();
    void Visualiser();

};

#endif // EMBALLAGE_H
