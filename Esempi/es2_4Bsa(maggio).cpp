//Es. 2_4^Bsa
struct Data {
	int gg;
	int mm;
	int aa;
};

struct Persona {
	int matricola;
	string nome;
	string indirizzo;
	Data datanascita;
	string codfiscale;
	bool coniugato;
};
Persona studente;

cout<<studente.datanascita.aa<<endl;
