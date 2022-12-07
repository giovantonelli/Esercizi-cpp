#include <iostream>
#include <cmath>
using namespace std;

double ipotenusa(double a, double b) {
	double c;
	c=sqrt(pow(a,2)+pow(b,2));
	return c;
}

int main() {
	double p,c1,c2,i,a;
	cout<<"Inserisci i due cateti"<<endl;
	cin>>c1>>c2;
	i=ipotenusa(c1,c2);
	p=c1+c2+i;
	a=(c1*c2)/2;
	cout<<"L'ipotenusa e': "<<i<<endl;
	cout<<"Il perimetro e': "<<p<<endl;
	cout<<"L'area e': "<<a<<endl;
	system("PAUSE");
	return 0;
}
