#include "Prodotto.h"
void inserisci_dato_prodotto(Prodotto &p){
	cout<<"inserisci il codice del prodotto: ";
	cin.getline(p.codice,N);
	cout<<"inserisci la descrizione del prodotto: ";
	cin.getline(p.descrizione,N);
	cout<<"inserisci la quantita del prodotto: ";
	cin>>p.qta;
	cout<<endl;
}
void visualizza_dati_prodotto(const Prodotto p){
	cout<<"Codice: "<<p.codice<<endl;
	cout<<"Descrizione: "<<p.descrizione<<endl;
	cout<<"Quantita: "<<p.qta<<endl;
}
