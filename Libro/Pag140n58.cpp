#include<iostream>
using namespace std;

void Incrementa(float &a)
{
	cout<<(1.03*a)<<endl;
}

int main()
{
float prezzo;
float* punt=&prezzo;
	cin>>prezzo;
	Incrementa(*punt);
system("PAUSE");
return 0;
}
