#include <iostream>
#include <string>
using namespace std;

struct Ordine {
        int num_ordine;
        string codice_prodotto;
        int quantita;
        float prezzo;
    };

int main() {
    Ordine articolo;
    Ordine* pArticolo = &articolo;
    cout<<"Inserire numero ordine: ";
    cin>>pArticolo->num_ordine;
    cout<<"Inserire codice prodotto: ";
    cin>>pArticolo->codice_prodotto;
    cout<<"Inserire quantita': ";
    cin>>pArticolo->quantita;
    cout<<"Inserire prezzo unitario: ";
    cin>>pArticolo->prezzo;

    cout<<"Codice prodotto: "<<pArticolo->codice_prodotto<<endl;
    cout<<"Prezzo totale: "<<((pArticolo->prezzo)*(pArticolo->quantita))<<endl;
    system("PAUSE");
    return 0;
}