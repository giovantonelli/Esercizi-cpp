#include <iostream>
using namespace std;

int main() {
    float prezzo;
    int reparto, N;
    cout<<"Inserisci il numero di prodotti: ";
    cin>>N;
    for(int i=1; i<=N; i++) {
        cout<<"Inserisci prezzo e reparto del prodotto numero "<<i<<endl;
        cin>>prezzo>>reparto;
        switch(reparto) {
            case 1:
                cout<<"Nessuno sconto"<<endl; 
                break;
            case 2:
                prezzo-=(prezzo*0.03);
                cout<<prezzo<<" euro"<<endl;  
                break;
            case 3:
                prezzo-=(prezzo*0.02);
                cout<<prezzo<<" euro"<<endl;  
                break;
            case 4:
                prezzo-=(prezzo*0.05);
                cout<<prezzo<<" euro"<<endl;   
                break;
        }
    }
    return 0;
}