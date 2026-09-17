#include "emballage.h"
#include <iostream>
#include <iomanip>

using namespace std;


Emballage::Emballage(string format, int resistanceMax, int Longueur, int largeur, int hauteur) {

    cout << "Constructeur : Emballage / " << format << endl;


}

Emballage::~Emballage()
{
    cout << "Destructeur : Emballage / " << format << endl;

}



void Emballage::Visualiser() {
    cout <<"|" << setw(15) << left << format <<"|"<< setw(2) << right << resistanceMax<<"kg" <<"|"<<longueur<<"x"<<largeur;

}
