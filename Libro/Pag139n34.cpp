#include <iostream>
using namespace std;

void funzione(int b) {
	cout<<b+1<<endl;
	cout<<b+2<<endl;
	cout<<b+3<<endl;
	cout<<b+4<<endl;
	cout<<b+5<<endl;
}

int main() {
	int a;
	cin>>a;
	funzione(a);
	return 0;
}
