//Utilizzando una funzione calcolare la distanza a cui si devono trovare due cariche rispettivamente di 2 C e -5 C
//sottoposte ad una forza di 200 N
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

float distanza(int q1,int q2,int F)
{ 
	const double k=8.99e+009;
	return sqrt((k*abs(q1)*abs(q2))/F);
}

int main(){
int q1,q2,F;
	cin>>q1>>q2>>F;
	cout<<"La distanza tra le due cariche e' "<< scientific<<distanza(q1,q2,F)<<endl;
system("PAUSE");
return 0;
}
