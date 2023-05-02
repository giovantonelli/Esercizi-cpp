#include <iostream>
using namespace std;

int main() {
    int a=5,b=10;
    int* puntA=&a;
    int* puntB=&b;
    cout<<a<<'\t'<<b<<endl;
    cout<<&a<<'\t'<<&b<<endl;
    cout<<puntA<<'\t'<<puntB<<endl;
    cout<<&puntA<<'\t'<<&puntB<<endl;
    system("PAUSE");
    return 0;
}