//Assegnati N (N>0) numeri interi casuali <200 calcolare il minimo elemento dispari minore di 100
//e la tangente del massimo numero minore di 90 (gradi!) mediante una funzione.
#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

void Risolvi(int a){
const float pi=3.1415;
int n,min=1000,max=0;
	srand(time(NULL));
	for(int i=1;i<=a;i++){
		n=rand()%200;
		cout<<n<<endl;
		if(n%2!=0 && n<100 && n<=min)
			min=n;
		if(n>=max && n<90)	
			max=n;
	}	
	cout<<"Il min elemento dispari <100 vale "<<min<<endl;
	cout<<"La tangente vale "<<tan(max*pi/180)<<endl;	
}

int main(){
int N;
	do{
		cin>>N;
	}while (N<=0);
	Risolvi(N);
system("PAUSE");	
return 0;	
}
