#include <iostream>
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
void carica_k(int* v,const int n, const int k){
	for(int i=0;i<n-1;i++){
		if(v[i]==0){
			v[i+1]=k;
		}
	}
}
int main(int argc, char** argv) {
	int v[N];
	int n;
	int k;
	leggi_vettore(v,n);
	stampa_vettore(v,n);
	cout<<"inserisci il valore k: ";
	cin>>k;
	carica_k(v,n,k);
	stampa_vettore(v,n);
	return 0;
}
