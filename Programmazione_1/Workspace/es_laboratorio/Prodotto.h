#include <iostream>
using namespace std;
const int N=100;
typedef char stringa[N];
//struttura prodotto
struct	Prodotto{
	stringa codice;		//codice identificativo
	stringa descrizione;//descrizione del prodotto
	int qta;			//quantita del prodotto
};
void inserisci_dato_prodotto(Prodotto &);
void visualizza_dati_prodotto(const Prodotto);

