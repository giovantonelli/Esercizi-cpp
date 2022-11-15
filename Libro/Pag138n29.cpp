#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, tempo,min=1000;
    string nome,categoria;
    cout<<"Inserisci il numero di studenti partecipanti"<<endl;
    cin>>N;
    for (int i=1; i<=N; i++) {
    cin>>nome>>categoria>>tempo;
    if (categoria=="allievi") {
        if (tempo<=min) {
            min=tempo;
            }
        }
    }
    cout<<tempo<<endl;
    return 0;
}