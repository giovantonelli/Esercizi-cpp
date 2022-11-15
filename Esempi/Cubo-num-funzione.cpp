//Calcolo del cubo di un numero
#include <iostream>
using namespace std;

float cubo (float c) {
    return c*c*c;
}

int main() {
    float c, num;
    cout<<"Inserisci il numero per calcolare il cubo: ";
    cin>>num;
    c=cubo(num); 
    cout<<"Il cubo e': "<<c;
    return 0;
}
