//Incrementa un numero con una funzione
#include <iostream>
using namespace std;

int Incremento(int& y) {
    return y+=2;
}

int main() {
    int x;
    cout<<"Inserisci un numero da incrementare: ";
    cin>>x;
    Incremento(x);
    cout<<"Il numero incrementato e': "<<x;
    return 0;
}