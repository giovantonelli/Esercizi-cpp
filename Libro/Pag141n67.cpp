#include<iostream>
#include<string>
using namespace std;

float val_med(float a, float b) {
	return a/b;
}

float val_tot(float a, float b) {
	return a*b;
}

int main() {
    string nome;
    float prezzo,prezzo_medio,quantita_media,valore_totale=0,somma_prezzi=0,somma_quantita=0;
    int N,qv;
    cout<<"Inserisci il numero dei prodotti: ";
    cin>>N;
    for (int i=1;i<=N;i++){
	    cout<<"Inserisci il prezzo e la quantita' venduta:"<<endl;
	    cin>>prezzo>>qv;
	    somma_prezzi+=prezzo;
	    somma_quantita+=qv;
	    prezzo_medio=val_med(somma_prezzi,N);
	    quantita_media=val_med(somma_quantita,N);
	    valore_totale+=val_tot(qv,prezzo);
    }
    cout<<"Il prezzo medio e' "<<prezzo_medio<<endl;
    cout<<"La quantita' media e' "<<quantita_media<<endl;
    cout<<"Il valore totale e' "<<valore_totale<<endl;
    return 0;
}