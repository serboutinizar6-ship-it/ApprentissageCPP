#ifndef BARRE_H
#define BARRE_H


class Barre {
protected:
    string reference;
    int longueur;
    int densite;
    string nom;

public:
    Barre(const string &_reference, const int &_longueur, const int &_densite, const string &_nom);
    void AfficherCaracteristiques();

    int GetLongueur() const;
    int GetDensite() const;
};

#endif // BARRE_H
