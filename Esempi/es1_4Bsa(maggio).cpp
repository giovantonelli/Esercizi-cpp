//Es. 1_4^Bsa
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
const float pi=3.1415;
int v1[5],v2[5];
int* p1=v1;
int* p2=v2;
	srand(time(NULL));
	for(int i=0;i<5;i++){
		v1[i]=rand()%100;
		cout<<"v1["<<i<<"]= "<<v1[i]<<endl;
		v2[i]=rand()%100;
		cout<<"v2["<<i<<"]= "<<v2[i]<<endl;
	}
	for(int i=0;i<5;i++){
		cout<<"coseno di v1["<<i<<"]= "<<cos(*p1*pi/180)<<endl;
		p1++;
		cout<<"cubo di v2["<<i<<"]= "<<pow(*p2,3.0)<<endl;
		p2++;
	}
system("PAUSE");
return 0;
}
