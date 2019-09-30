#include "Magazzino.h"
void crea_magazzino(Magazzino &m, int &n){
	do{
		cout<<"inserisci il numero di elementi: ";
		cin>>n;
	}while(n<0||n>N);
	for(int i=0;i<n;i++){
		cin.ignore(100, '\n');
		inserisci_dato_prodotto(m[i]);
	}
	cin.ignore(100, '\n');
}
int cerca_prodotto(const Magazzino m,const int n,const stringa cod){
	int pos=-1;
	bool trovato=false;
	int i=0;
	
	while(i<n && trovato==false){
		if(strcmp(m[i].codice,cod)==0){
			pos=i;
			trovato=true;
		}
		else
			i++;
	}
	return pos;
}
void elimina_prodotto(Magazzino &m,int &n,int pos){
	if(pos<0||pos>n)
		cout<<"posizione non valida!!"<<endl;
	else{
		for(int i=pos;i<n-1;i++){
			strcpy(m[i].codice,m[i+1].codice);
			strcpy(m[i].descrizione,m[i+1].descrizione);
			m[i].qta=m[i+1].qta;
		}
		n--;
	}
}
void visualizza_magazzino(const Magazzino m,const int n){
	for(int i=0;i<n;i++){
		cout<<"prodotto "<<i+1<<")"<<endl;
		visualizza_dati_prodotto(m[i]);
		cout<<endl;
	}
}
void stampa_stato_magazzino(const Magazzino m,const int n){
	fstream output;
	stringa path;
	
	cout<<"inserisci il path del file: ";
	cin.ignore(100, '\n');
	cin.getline(path,N);
	
	output.open(path,ios::out);
	if(output.is_open()){
		for(int i=0;i<n;i++){
			output<<"prodotto "<<i+1<<")"<<endl;
			output<<"\t Codice: "<<m[i].codice<<endl;
			output<<"\t Descrizione: "<<m[i].descrizione<<endl;
			output<<"\t Quantita: "<<m[i].qta<<endl;
			output<<endl;
		}
	}
	else{
		cout<<"errore apertura file"<<endl;
	}
	
	
	output.close();
}
