#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    float prezzo, percentuale;
    string descrizione;
    cout<<"Inserisci il numero di prodotti da inserire: ";
    cin>>N;
    cout<<"Inserisci la percentuale(%) di incremento dei prodotti: ";
    cin>>percentuale;
    percentuale/=100;
    cout<<"Inserisci i prodotti (prezzo-descrizione)"<<endl;
    for(int i=1; i<=N; i++) {
        cin>>prezzo>>descrizione;
        prezzo+=prezzo*percentuale;
        cout<<descrizione<<" --> "<<prezzo<<" euro"<<endl;
    }
    return 0;
}