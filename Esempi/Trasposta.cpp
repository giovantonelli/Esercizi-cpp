#include<iostream>
using namespace std;

int main(){
    int m[3][3];
    int m_trasposta[3][3];
    for (int i=1;i<=3;i++){
		for (int j=1;j<=3;j++){
			cin>>m[i][j];
		}
	}
    for (int i=1;i<=3;i++){
		for (int j=1;j<=3;j++){
			m_trasposta[i][j]=m[j][i];
            cout<<m_trasposta[i][j];
            }
	}
    system("PAUSE");
    return 0;
}