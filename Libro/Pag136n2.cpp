#include <iostream>
using namespace std;

int main(){
  float lato;
  float perimetro, area = 0;
  cout<<"Inserisci il valore del lato"<<endl;
  cin>>lato;
  perimetro=4*lato;
  area=lato*lato;
  cout<<"Il perimetro e' "<<perimetro<<endl;
  cout<<"L'area e' "<<area;
  return 0;  
}