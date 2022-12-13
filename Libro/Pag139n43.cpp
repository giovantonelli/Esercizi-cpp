#include <iostream>
#include <string>
using namespace std;

int main() {
    string n1, n2;
    int v1, v2, v;
    float percent1, percent2;
    cout<<"Inserisci il nome del primo candidato e i suoi voti"<<endl;
    cin>>n1>>v1;
    cout<<"Inserisci il nome del secondo candidato e i suoi voti"<<endl;
    cin>>n2>>v2;
    v=v1+v2;
    percent1=(v1*100)/v; //v1:v=x:100%
    percent2=(v2*100)/v;

    if (percent1>percent2) {
        cout<<n1<<endl<<n2;
    } else {
        cout<<n2<<endl<<n1;
    }
    return 0;
}