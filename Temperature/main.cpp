#include "temperature.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    _________   // début du bloc surveillé
    {
        Temperature t1(100.0);
        t1.Afficher();                      // attendu : 100 °C
        cout << t1.EnKelvin() << endl;      // attendu : 373.15
        cout << t1.EnFahrenheit() << endl;  // attendu : 212

        Temperature t2(-300.0);             // doit lever une exception !
        t2.Afficher();                      // ne doit pas s'exécuter
    }
    _________(ErreurTemperature _________& exp)
    {
        cout << "Erreur " << exp._________() << endl;
        cout << exp._________() << endl;
        return 0;                  // EXIT_FAILURE
    }
    return EXIT_SUCCESS;
}