//Supponiamo di avere i voti di 10 materie e di voler fare la media
#include <iostream>
using namespace std;

double media(double somma) {
    return somma/10;
}

int main() {
    double voto, m, somma;
    for(int i=1; i<=10; i++) {
    cout<<"Inserisci il voto numero "<<i<<": ";
    cin>>voto;
    somma+=voto;
    }
    m=media(somma);
    cout<<"La media e': "<<m;
}