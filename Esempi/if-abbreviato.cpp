//Il programma legge due numeri e controlla se il primo è maggiore del secondo.
#include <iostream>
using namespace std;

int main() {
    int a, b, max;
    cout<<"Inserisci due numeri:"<<endl;
    cin>>a>>b;
    a>b?max=a:max=b; //(condizione)?istr-true:istr-false;
    cout<<max;
    return 0;
}