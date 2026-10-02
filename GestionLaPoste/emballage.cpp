#include "emballage.h"

Emballage::Emballage(string _format, int _resistance, int _longueur, int _largeur, int _hauteur)
{
    format = _format;
    resistance = _resistance;
    longueur = _longueur;
    largeur = _largeur;
    hauteur = _hauteur;
    stock = 0;

    cout << "Constructeur : Emballage / " << format << endl;
}

Emballage::~Emballage()
{
    cout << "Destructeur : Emballage / " << format << endl;
}

void Emballage::Visualiser()
{
    cout << "| " << format << " | " << resistance << " kg | " << longueur << " X " << largeur;
    if (hauteur > 0)
    {
        cout << " X " << hauteur;
    }
    cout << " |" << endl;
}

float Emballage::CalculerVolume()
{
    float l = longueur / 10.0;
    float L = largeur / 10.0;
    float h = hauteur / 10.0;

    if (hauteur == 0)
    {
        return l * L;
    }
    else
    {
        return l * L * h;
    }
}

bool Emballage::operator<(Emballage &autre)
{
    if (CalculerVolume() < autre.CalculerVolume())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Emballage::operator==(Emballage &autre)
{
    if (format == autre.format && resistance == autre.resistance && longueur == autre.longueur && largeur == autre.largeur && hauteur == autre.hauteur)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Emballage::operator float()
{
    return CalculerVolume();
}
