//calcola la somma di due numeri utilizzando le funzioni
#include <iostream>
using namespace std;

int somma (int a, int b) {
    return a+b;
}

int main () {
    int a, b, s;
    cout<<"Inserisci i due numeri da sommare:"<<endl;
    cin>>a>>b;
    s=somma(a,b);
    cout<<"La somma e': "<<s;
    return 0;
}