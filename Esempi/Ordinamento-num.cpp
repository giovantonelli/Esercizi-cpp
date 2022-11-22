#include <iostream>
using namespace std;

void Ordina(int& x, int& y) {
    int temp;
    if (x>y) {
        temp=x;
        x=y;
        y=temp;
    }
}

int main() {
    int a,b,c;
    cout<<"Inserisci 3 numeri, e te li ordinero'!"<<endl;
    cin>>a>>b>>c;
    Ordina(a,b);
    Ordina(a,c);
    Ordina(b,c);
    cout<<"I numeri in ordine sono: "<<a<<" "<<b<<" "<<c;
    return 0;
}