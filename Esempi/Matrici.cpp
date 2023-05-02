/*Assegnata una matrice 3x3 determinare la media geometrica degli elementi della diagonale secondaria, il massimo elemento dispari, e il minimo elemento della seconda riga */
#include <iostream>
#include <cmath>
#define N 3
using namespace std;

int main(){
	int m[N][N], max=0, min=1000;
	double media_geom, prodotto=1;
	cout<<"Inserisci i valori della matrice:"<<endl;
	for (int i=1; i<=N; i++) {
		for (int j=1; j<=N; j++) {
			cin>>m[i][j];
			if (i+j==N+1) {
				prodotto*=m[i][j];
			}
			if (m[i][j]%2!=0 && m[i][j]>=max) {
				max=m[i][j];
			}
			if (m[2][j]<=min) {
				min=m[2][j];
			}
		}
	}
	cout<<"media geometrica= "<<pow(prodotto, 1/3.0)<<endl;
	cout<<"massimo= "<<max<<endl;
	cout<<"minimo= "<<min<<endl;
	system("PAUSE");
	return 0;
}
