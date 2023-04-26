#include<iostream>
using namespace std;
int main(){
int v[10],p=1;	
	cout<<"Inserisci gli elementi del vettore: "<<endl;
	for(int i=1;i<=10;i++){
		cin>>v[i];
		p=p*v[i];
	}
	cout<<"Il prodotto delle componenti del vettore e' "<<p<<endl;	
system("PAUSE");
return 0;	
}
