
/*Si sviluppi un programma per la gestione di un magazzino di prodotti. Un Prodotto è rappresentato mediante un record contenente tre campi: un campo Codice (stringa di caratteri allocata staticamente), un campo Descrizione 
(stringa di caratteri allocata staticamente), e un campo Qta di tipo intero. Il magazzino è rappresentato da un vettore di prodotti allocato staticamente e dal suo riempimento. Si sviluppino le seguenti funzioni/procedure che 
operano sul tipo record “Prodotto” e sul tipo vettore “Magazzino”:

Inserisci_DatiProdotto: Si interfaccia con l'utente per inizializzare un record di tipo “Prodotto”.
Visualizza_DatiProdotto: Stampa a video il valore dei campi Codice, Descrizione e Qta del record Prodotto fornito in ingresso.
Crea_Magazzino: Inizializza il magazzino leggendo il vettore di Prodotti. Si interfaccia con l'utente che fornisce il valore del riempimento e i dati dei prodotti (Crea_Magazzino chiama a questo scopo Inserisci_DatiProdotto).
Cerca_Prodotto: Dato il codice di un prodotto determina se il prodotto è presente in magazzino e in caso affermativo fornisce la sua posizione nel vettore.
Elimina_Prodotto: Data una posizione valida in magazzino, elimina il prodotto presente in quella posizione del vettore.
Visualizza_Magazzino: Mostra a video i dati di tutti i prodotti presenti in magazzino (Visualizza_Magazzino chiama a questo scopo Visulaizza_DatiProdotto).
Stampa_StatoMagazzino: Stampa su un file di tipo testo i dati di tutti i prodotti presenti in magazzino.

Si strutturi il programma secondo le tecniche di programmazione modulare (e compilazione separata) illustrati a lezione e nei libri di testo adottati.
*/
#include <iostream>
#include "Magazzino.h"
using namespace std;
//main per il test della lib Prodotto.h
/*
int main(int argc, char** argv) {
	Prodotto p;
	inserisci_dato_prodotto(p);
	visualizza_dati_prodotto(p);
	return 0;
}
*/

//main per testare la lib Magazzino.h
int main(){
	Magazzino mag;
	int n;
	stringa codice;
	int pos;
	
	crea_magazzino(mag,n);
	visualizza_magazzino(mag,n);
	cout<<"inserisci il codice del prodotto da cercare: ";
	cin.getline(codice,N);
	pos=cerca_prodotto(mag,n,codice);
	cout<<"posizione: "<<pos<<endl;	
	cout<<"inserisci la posizione del prodotto da eliminare: ";
	cin>>pos;
	cout<<"eliminazione prodotto.... "<<endl;
	elimina_prodotto(mag,n,pos);
	visualizza_magazzino(mag,n);
	
	cout<<endl<<"stampa su file...."<<endl;
	stampa_stato_magazzino(mag,n);
	return 0;
}
