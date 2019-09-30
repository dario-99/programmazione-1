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
bool trova_minore(const int* v, const int n, const int k){
	bool trovato=false;
	int i=0;
	while(i<n && trovato==false){
		if(v[i]<k)
			trovato=true;
		else
			i++;
	}
	return trovato;
}
int main(int argc, char** argv) {
	int v[N];
	int n;
	int k;
	leggi_vettore(v,n);
	stampa_vettore(v,n);
	cout<<"inserisci il valore k: ";
	cin>>k;
	if(trova_minore(v,n,k))
		cout<<"c'e un elemento minore di "<<k<<"!!"<<endl;
	else
		cout<<"tutti gli elementi ssono maggiori di "<<k<<endl;
	return 0;
}
