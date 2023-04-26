//Es. n.52 pag. 140
#include<iostream>
using namespace std;
int main(){
int v[10],cont=0;	
	cout<<"Inserisci gli elementi del vettore: "<<endl;
	for(int i=1;i<=10;i++){
		cin>>v[i];
		if(i<=3)
			cout<<2*v[i]<<endl;
	}
system("PAUSE");
return 0;	
}
