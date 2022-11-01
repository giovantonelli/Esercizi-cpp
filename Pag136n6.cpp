#include <iostream>
using namespace std;

int main(){
  int eta,somma=0;
  float media;
  for(int i=1; i<=3; i++) {
  cout<<"Inserisci l'eta'"<<endl;
  cin>>eta;
  somma+=eta;
  }
  media= (float) somma/3;
  cout<<"La media e' "<<media:
  return 0;  
}