#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include <string>
using namespace std;

const double ZERO_ABSOLU = -273.15;

enum ErrTemp
{
    ERR_VALEUR,
    ERR_CONVERSION
};

class ErreurTemperature
{
private:
    ___________ ___________;
    ___________ ___________;
public:
    ErreurTemperature(int _codeErreur, string _message);
    ___________ ObtenirCode() const;
    ___________ ObtenirMessage() const;
};

class Temperature
{
private:
    ___________ ___________;
public:
    Temperature(double _valeur);
    double EnKelvin() const;
    double EnFahrenheit() const;
    double ObtenirValeur() const;
    void Afficher() const;
};

#endif // TEMPERATURE_H
