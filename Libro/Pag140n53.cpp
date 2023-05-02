#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Abitazione{
        string via;
        int CAP;
        string Comune;
    };

    struct Persona {
        int matricola;
        Abitazione indirizzo;
        string datanascita;
        string codfiscale;
        bool coniugato;
    };
    Persona dipendente;
    system("PAUSE");
    return 0;
}