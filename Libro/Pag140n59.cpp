#include <iostream>
using namespace std;

int main() {
    int v[10];
    int* v_punt=v;
    cout<<"Inserisci 10 numeri interi"<<endl;
    for (int i=0; i<10; i++) {
        cin>>v[i];
    }
    for (int i=0; i<10; i++) {
        cout<<*(v_punt+i)<<endl;
    }
    system("PAUSE");
    return 0;
}