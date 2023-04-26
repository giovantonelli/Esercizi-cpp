 //Assegnata una matrice 3x3 determinare la media geometrica degli elementi della diagonale secondaria, il massimo elemento dispari, e il
//minimo elemento della seconda riga
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int m[3][3], max=0, min=1000;
	double media_geom, prodotto=1;
	cout<<"Inserisci i valori della matrice:"<<endl;
	for (int i=1; i<=3; i++) {
		for (int j=1; j<=3; j++) {
			cin>>m[i][j];
			if (i+j==4) {
				prodotto*=m[i][j];
			}
			if (m[i][j]%2!=0 && m[i][j]>max) {
				max=m[i][j];
			}
			if (i==2 && m[i][j]<min) {
				min=m[i][j];
			}
		}
	}
	media_geom=pow(prodotto, 1/3.0);
	cout<<media_geom<<endl;
	cout<<max<<endl;
	cout<<min<<endl;
	return 0;
	system("PAUSE");
}
