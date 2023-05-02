#include <iostream>
using namespace std;

int main() {
    int v[10];
    int* v_punt=v;
    for (int i=0; i<10; i++) {
        cout<<"Inserisci il valore dell'elemento "<<i<<": ";
        cin>>*(v_punt+i);
    }
    cout << "I valori dell'array sono:"<<endl;
    for (int i=0; i<10; i++) {
        cout<<*(v_punt+i)<<" ";
    }
    cout<<endl;
    system("PAUSE");
    return 0;
}