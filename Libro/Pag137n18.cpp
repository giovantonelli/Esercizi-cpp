#include <iostream>
using namespace std;

int main() {
    int peso,costo;
    cout<<"Inserisci il peso del pacco da spedire: ";
    cin>>peso;
    if (peso<=3) {
        costo=5;
    } else {
        if (peso<=10) {
            costo=8;
        } else {
            costo=10;
        }
    }
    cout<<"Il costo della spedizione e' pari a "<<costo<<" euro"<<endl;
    return 0;  
}