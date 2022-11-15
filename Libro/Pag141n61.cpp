#include <iostream>
using namespace std;

int main() {
    int N;
    do {
        cout<<"Trasforma un numero da 1 a 7 nel giorno della settimana corrispondente: ";
        cin>>N;
    } while (N<1 || N>7);
    switch(N) {
        case 1:
            cout<<"Lunedi'";
            break;
        case 2:
            cout<<"Martedi'";
            break;   
        case 3:
            cout<<"Mercoledi'";
            break;
        case 4:
            cout<<"Giovedi'";
            break;
        case 5:
            cout<<"Venerdi'";   
            break;
        case 6:
            cout<<"Sabato";
            break;
        case 7:
            cout<<"Domenica";
            break;          
    }
    return 0;
}