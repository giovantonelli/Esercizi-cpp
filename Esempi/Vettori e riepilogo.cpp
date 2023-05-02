//assegnati 5 vettori di 8 numeri interi casuali <30 calcolare il massimo elemento dispari del terzo vettore, il minimo elemento di
//indice pari del quinto vettore e gli elementi di un sesto vettore pari al coseno del somma dei restanti vettori
#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
	int v1[8], v2[8], v3[8], v4[8], v5[8], max=0, min=1000;
	float v6[8];
	const float PI=3.14;
	srand (time(NULL));
	for (int i=1; i<=8; i++) {
		v1[i]= rand() %30; 
		cout<< "elemento"<<i<<"di v1: "<<v1[i]<<endl;
		v2[i]= rand() %30; 
		cout<< "elemento"<<i<<"di v2: "<<v2[i]<<endl;
		v3[i]= rand() %30; 
		cout<< "elemento"<<i<<"di v3: "<<v3[i]<<endl;
		v4[i]= rand() %30; 
		cout<< "elemento"<<i<<"di v4: "<<v4[i]<<endl;
		v5[i]= rand() %30; 
		cout<< "elemento"<<i<<"di v5: "<<v5[i]<<endl;
		if(v3[i]%2!=0&&v3[i]>=max)
		max=v3[i];
		if (i%2==0&&v5[i]<=min)
		min=v5[i];
		v6[i]=cos(((v1[i]+v2[i]+v4[i])*PI)/180);
	}
	for (int i=1; i<=8; i++) {
     cout<<"elemento"<<i<<"di v6: "<<v6[i]<<endl;
	}
	cout<<"il massimo"<<max;
	cout<<"il minimo"<<min;
	system ("PAUSE");
	return 0;
}
