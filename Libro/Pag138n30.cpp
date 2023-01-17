#include ‹iostream>
#include <string>
using namespace std;

int main() {
	int N, cilindrata;
	float prezzo, max=0;
	string nomemodello;
	cout‹‹"Inserisci il numero di modelli: ";
	cin››N;
	for (int i=1;i<=N;i++) {
		cout«‹"Inserisci il nome del modello, cilindrata e prezzo"«<endl;
		cin››nomemodello››cilindrata››prezzo;
		if (cilindrata>50 && prezzo›max) {
			max=prezzo;
		}
	}
	cout«‹"Il prezzo massimo tra i modelli di cilindrata superiore a 50 cc e' di "«‹max‹‹end1;
	return 0;
}