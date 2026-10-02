#ifndef EMBALLAGE_H
#define EMBALLAGE_H

#include <iostream>
#include <string>

using namespace std;

class Emballage
{
private:
    string format;
    int resistance;
    int longueur;
    int largeur;
    int hauteur;
    int stock;

public:
    Emballage(string _format, int _resistance, int _longueur, int _largeur, int _hauteur = 0);
    ~Emballage();

    void Visualiser();
    float CalculerVolume();

    bool operator<(Emballage &autre);
    bool operator==(Emballage &autre);
    operator float();
};

#endif // EMBALLAGE_H
