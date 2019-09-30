#include <iostream>
#include <string.h>
using namespace std;
const int N=100;
void leggi_vettore(int* v,int &n){
	do{
		cout<<"inserisci il numero di valori: ";
		cin>>n;
	}while(n<0 || n>N);
	for(int i=0;i<n;i++){
		cout<<"inserisci l'elemento "<<i+1<<": ";
		cin>>v[i];
	}
}
void stampa_vettore(const int* v,const int n){
	for(int i=0;i<n;i++)
		cout<<i+1<<") "<<v[i]<<endl;
}
void sposta(int* v, int &n, int pos){
	for(int i=pos;i<n-1;i++){
		v[i]=v[i+1];
	}
	n--;
}
int elimina_occorrenze(int* v,int &n,const int k){
	int cont=0;
	for(int i=0;i<n;i++){
		if(v[i]==k){
			sposta(v,n,i);
			cont++;
			i--;
		}
	}
	return cont;
}
int main(int argc, char** argv) {
	int v[N];
	int n;
	int k;
	int n_elim;
	leggi_vettore(v,n);
	stampa_vettore(v,n);
	cout<<"inserisci il valore k: ";
	cin>>k;
	n_elim=elimina_occorrenze(v,n,k);
	stampa_vettore(v,n);
	cout<<"sono stati eliminati "<<n_elim<<" elementi "<<endl;
	return 0;
}
