#include <iostream>
using namespace std;

int main() {
    const float scatto = 0.10;
    const float fissa = 0.15;
    const float supplemento = 0.09;
    int secondi;
    float costo;
    cout<<"Inserisci i secondi di telefonata effettuati"<<endl;
    cin>>secondi;
    if (secondi<=80) {
        costo=scatto+fissa*secondi;
    } else {
        costo=scatto+fissa*80+supplemento*(secondi-80);
    }
    cout<<"Hai speso: "<<costo<<" euro";
    return 0;
}