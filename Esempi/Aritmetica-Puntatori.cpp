#include<iostream>
using namespace std;
int main() {
    double v[5]={11.54,15,6.9,89.5,67};
    double* punt=v;
	cout<<punt<<endl;
	cout<<punt+1<<endl;
	cout<<*punt+1<<endl;
	cout<<*(punt+1)<<endl;
    system("PAUSE");
    return 0;
}
