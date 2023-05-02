#include<iostream>
using namespace std;
int main() {
	int a=7,b=13;
	int* p1;
	int* p2;
	p1=&a;
	p2=&b;
	cout<<"valore di a "<<a<<endl;
	cout<<"valore di b "<<b<<endl;
	cout<<"indirizzo di a "<<&a<<endl;
	cout<<"indirizzo di b "<<&b<<endl;
	cout<<"valore del puntatore p1 "<<p1<<endl;
	cout<<"valore del puntatore p2 "<<p2<<endl;
	cout<<"indirizzo del puntatore p1 "<<&p1<<endl;
	cout<<"indirizzo del puntatore p2 "<<&p2<<endl;
	system("PAUSE");
	return 0;
}

