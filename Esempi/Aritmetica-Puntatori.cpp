#include<iostream>
using namespace std;

int main() {
    double v[5]={11.54,15,6.9,89.5,67};
    double* punt=v;
	cout<<"Indirizzo di memoria di v[0]: "<<punt<<endl; // &v[0]
	cout<<"Indirizzo di memoria di v[1]: "<<punt+1<<endl; // &v[1]
	cout<<"Valore di v[0] incrementato di 1: "<<*punt+1<<endl; // v[0]+1
	cout<<"Valore di v[1]: "<<*(punt+1)<<endl; // v[1]
    system("PAUSE");
    return 0;
}