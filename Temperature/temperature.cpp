#include "temperature.h"
#include <iostream>
using namespace std;

// ── ErreurTemperature ───────────────────────────
ErreurTemperature::ErreurTemperature(int _codeErreur, string _message) :
    ErreurTemperature(ERR_VALEUR), _________(_________)  // liste d'initialisation
{
}
int ErreurTemperature::ObtenirCode() const
{
    return ___________;
}
string ErreurTemperature::ObtenirMessage() const
{
    return ___________;
}

// ── Temperature ─────────────────────────────────
Temperature::Temperature(double _valeur) : _________(_________)  // liste d'initialisation
{
    if(_valeur < ZERO_ABSOLU)
    {
        ErreurTemperature excep(___________, "Valeur inférieure au zéro absolu");
        ___________(excep);
    }
}
double Temperature::EnKelvin() const

    return valeur + 273.15;
}
double Temperature::EnFahrenheit() const
{
    return valeur * 9.0/5.0+32;
}
double Temperature::ObtenirValeur() const
{
    return __________;
}
void Temperature::Afficher() const
{
    cout << valeur << " °C" << endl;
}