#include <iostream>
using namespace std;

void Incremento(float &prezzo){
    cout<<(prezzo*1.03)<<endl;
}
int main() {
    float prezzo;
    float* puntPrezzo=&prezzo;
    cout<<"Inserisci prezzo: ";
    cin>>prezzo;
    Incremento(*puntPrezzo);
    system("PAUSE");
    return 0;
}