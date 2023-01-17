#include<iostream>
#include<string>
using namespace std;

bool verifica(string prima, string seconda) {
    if (prima==seconda) {
        cout<<"Le password sono corrette"<<endl;
        return true;
    } else {
        cout<<"Le password sono diverse fra loro!"<<endl;
        return false;
    }
}

int main() {
    string password1, password2;
    bool risultato;
    do {
        cout<<"Inserisci la password: ";
        cin>>password1;
        cout<<"Inserisci la password per verificare: ";
        cin>>password2;
        risultato=verifica(password1,password2);
    } while (risultato!=true);
    return 0;
}