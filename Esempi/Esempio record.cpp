struct Abitazione{
	string via;
	int CAP;
	string Comune;
};

struct Persona {
	int matricola;
	Abitazione indirizzo;
	string datanascita;
	string codfiscale;
	bool coniugato;
};
Persona studente;

cout<<studente.indirizzo.Comune<<endl;
