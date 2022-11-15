#include <iostream>
using namespace std;

int main() {
	int N, min=10000, max=0, prodotto=1;
	for (int i=1; i<=5; i++) {
		cin>>N;
		if (N%5==0 && N>=max) {
			max=N;
		}
		if (N<20 && N<min) {
			min=N;
		}
	}
	prodotto=max*min;
	cout<<prodotto;
	system("PAUSE");
	return 0;
}
