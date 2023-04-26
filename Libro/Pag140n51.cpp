#include<iostream>
using namespace std;
int main(){
int v[10],cont=0;	
	cout<<"Inserisci gli elementi del vettore: "<<endl;
	for(int i=1;i<=10;i++){
		cin>>v[i];
		if(v[i]>5)
			cont++;
	}
	cout<<"Le componenti >5 sono "<<cont<<endl;	
system("PAUSE");
return 0;	
}
