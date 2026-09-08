#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nomDuFichier;
    cout << "Entrer le nom du fichier a lire : ";
    cin >> nomDuFichier;

    // Creation du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str()); // c_str() transforme string en char*

    if (!leFichier.is_open()) {
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    } else {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;

        // A completer, affichage de la premiere ligne du tableau
        cout << "+" << string(19, '-') << "+" << string(8, '-') << "+" << string(8, '-') << "+" << string(8, '-') << "+" << endl;

        do {
            // recuperation des valeurs
            leFichier >> pays >> nbOr >> nbArgent >> nbBronze;

            if (leFichier.good()) { // Si les valeurs ont bien ete lues
                // A completer, affichage de chaque ligne du tableau
                cout << "| " << left << setw(18) << pays
                     << "| " << right << setw(6) << nbOr << " "
                     << "| " << setw(6) << nbArgent << " "
                     << "| " << setw(6) << nbBronze << " |" << endl;
            }
        } while (!leFichier.eof());

        // A completer, affichage de la derniere ligne du tableau.
        cout << "+" << string(19, '-') << "+" << string(8, '-') << "+" << string(8, '-') << "+" << string(8, '-') << "+" << endl;
    }

    return 0;
}
