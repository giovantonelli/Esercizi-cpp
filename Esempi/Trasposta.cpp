#include <iostream>
using namespace std;

int main() {
    int matrice[3][3];
    int trasposta[3][3];

    // leggi la matrice da input
    cout << "Inserisci i valori della matrice (3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrice[i][j];
        }
    }

    // calcola la trasposta
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            trasposta[i][j] = matrice[j][i];
        }
    }

    // stampa la matrice originale
    cout << "Matrice originale:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    // stampa la matrice trasposta
    cout << "Matrice trasposta:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << trasposta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
