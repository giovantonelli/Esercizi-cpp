//Es. 3_4^Bsa
#include<iostream>
using namespace std;
int main(){
const int N=3;
int A[N][N],B[N][N],At[N][N],r,c,i,j,max,min;	
	for(r=1;r<=N;r++){
		for(c=1;c<=N;c++){
			cout<<"a["<<r<<","<<c<<"]= ";
			cin>>A[r][c];
			cout<<"b["<<r<<","<<c<<"]= ";
			cin>>B[r][c];
			At[c][r]=A[r][c];
			cout<<"matrice trasposta at["<<c<<","<<r<<"]= "<<At[c][r]<<endl;
		}
	}
	max=0;
	min=1000;
	for (i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			if (B[i][j]>=max)
				max=B[i][j];
			if (B[i][j]<=min)
				min=B[i][j];
		}
	}
	cout<<"media aritmetica= "<<(float)(max+min)/2<<endl;		
system("PAUSE");
return 0;		
}
