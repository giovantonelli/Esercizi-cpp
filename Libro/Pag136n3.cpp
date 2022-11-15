#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float raggio;
  float circonferenza, area = 0;
  cout<<"Inserisci il valore del raggio"<<endl;
  cin>>raggio;
  circonferenza=2*M_PI*raggio;
  area=M_PI*raggio*raggio;
  cout<<"La circonferenza e' "<<circonferenza<<endl;
  cout<<"L'area e' "<<area;
  return 0;  
}