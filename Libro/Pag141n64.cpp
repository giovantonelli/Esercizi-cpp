#include <iostream>
using namespace std;

int main() {  
    int N;
    float V,m;
	cout<<"Quanti oggetti vuoi inserire?"<<endl;
	cin>>N;
	for (int i=1;i<=N;i++) {
		cout<<"Oggetto "<<i<<endl;
		cout<<"Volume: ";
		cin>>V;
		cout<<"Peso: ";
		cin>>m;
		cout<<"volume= "<<V<<" "<<"peso= "<<m<<" "<<"peso specifico= "<<m/V<<endl;
	}
	cout<<"In numero di oggetti esaminati e' "<<N<<endl;
    return 0;
}