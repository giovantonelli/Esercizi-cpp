#include <iostream>
using namespace std;

void funzione(int b)  {
	for (int i;i<5;i++) {
		b++;
		cout<<b<<endl;
	}
}

int main() {
	int a;
	cin>>a;
	funzione(a);
	return 0;
}