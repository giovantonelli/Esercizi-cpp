#include<iostream>
#include<cmath>
#include<string>
using namespace std;

void Comunicazione (int a, int b, int c)
{
	cout<<"Gli stuenti residenti in comuni diversi dal capoluogo sono "<<a<<endl;
	cout<<"La percentuale degli studenti residenti in comuni diversi dal capoluogo e' "<<(float)a*100/b<<endl;
	cout<<"La distanza media dalla scuola e' "<<(float)c/b<<" km"<<endl;	
}

int main() {
int N,d,Sd=0,cont=0;
string nome,comune;
	cout<<"Quanti studenti sono iscritti a scuola? ";	
	cin>>N;
	for (int i=1;i<=N;i++) {
        cout<<i<<"° studente"<<endl;
        cout<<"nome: ";
        cin>>nome;
        cout<<"comune: ";
        cin>>comune;
        cout<<"Inserire la distanza dalla scuola (km): ";
        cin>>d;
        Sd=Sd+d;
        if (comune!="Bari") {
            cont++;				
	    }
    }
	Comunicazione(cont,N,Sd);	
    system("PAUSE");
    return 0;		
}
