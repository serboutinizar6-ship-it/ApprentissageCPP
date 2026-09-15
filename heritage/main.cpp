#include <iostream>
#include "contenant.h"
#include"Carton.h"

using namespace std;

int main()
{
    cout << "Contenant --------- " <<endl;
    Contenant unContenant(5,10,2);
    cout << "Volume du contenan : " << unContenant.CalculerVOlume()<<endl;

    cout << "Carton ---------- " <<endl;
    Carton unCarton(3,3,3,5.5);
    cout << "Volume du carton : " << unCarton.CalculerVolume() << endl;
    cout << "Poids maxi du carton : " << unCarton.ObtenirPoidsMaxi() << endl;
    return 0;
}
