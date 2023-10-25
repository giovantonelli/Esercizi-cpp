#include <iostream>
using namespace std;

int main() {
    int operai; 
    int unit_prod;
    int assenze;
    float coeff_usura;
    int scarti;
    cout<<"Inserisci il numero di operai: ";
    cin>>operai;
    for (int i=1; i<=operai; i++) {
        cout<<"Per l'operaio numero "<<i<<" inserisci riga per riga:"<<endl;
        cout<<"Numero di unita' prodotte: ";
        cin>>unit_prod;
        cout<<"Numero di assenze: ";
        cin>>assenze;
        cout<<"Coefficiente di usura: ";
        cin>>coeff_usura;
        cout<<"Numero di scarti: ";
        cin>>scarti;
        if (assenze<10 && unit_prod>2000) {
            cout<<"Premio B";
        } else if (assenze>10 && unit_prod>2000) {
            cout<<"Premio A";
        } else if (coeff_usura<0.5 || scarti<20) {
            cout<<"Premio C";
        } else if ((assenze<10 && coeff_usura<0.5) || (unit_prod>2000 && scarti<20)) {
            cout<<"Premio D";
        } else {
            cout<<"Nessun premio ricevuto";
        }
        cout<<endl;
    }
    system("PAUSE");
    return 0;
}