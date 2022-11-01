//Inserito il prezzo di un biglietto per il cinema e la relativa categoria di appartenenza
//(S=studenti, P=pensionati, H=diversamente abili, D=disoccupati) calcolarne il prezzo scontato
#include <iostream>
using namespace std;

int main() {
    float prezzo;
    char categoria;
    cout<<"Inserire il prezzo e la lettera di categoria appartenente: "<<endl;
    cin>>prezzo>>categoria;
    switch(categoria) {
        case 'S':
            prezzo*=0.5;    //50% di sconto
            break;
        case 'P':
            prezzo*=0.75;   //25% di sconto
            break;
        case 'H':
            prezzo=0;       //gratis
            break;
        case 'D':
            prezzo*=0.25;   //75% di sconto
            break;
        default:
            cout<<"Non hai diritto ad alcuno sconto!";
            break;
    }
    cout<<"Il prezzo del biglietto e' "<<prezzo<<endl;
    return 0;  
}