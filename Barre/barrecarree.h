#ifndef BARRECARREE_H
#define BARRECARREE_H

class BarreCarree
{

private:
    float cote;

public:
    BarreCarree(const string &_reference, const int &_longueur, const int &_densite, const string &_nom);

    float CalculerSection();
    float CalculerMasse();
};

#endif // BARRECARREE_H