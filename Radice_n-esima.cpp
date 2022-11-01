//Dati 5 numeri, calcola la radice n-esima
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, i, prodotto=1;
    double radice;
    cout << "Inserisci un numero:"<<endl;
    for(i=1; i<=5; i++){
    cin>>N;
    prodotto*=N;
    }
    radice= pow((double) prodotto, (double) 1/5);
    cout<<"La radice n-esima e' "<<radice;
    return 0;
}