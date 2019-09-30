#include "complex.h"

void swap(double &a, double &b)//scambia due valori di tipo double
{
	double temp;
	temp=a;
	a=b;
	b=temp;
}
void leggiComplex(Complesso &z)//Read del num complesso da tastiera
{
	cout<<"inserisci la parte reale: ";
	cin>>z.re;
	cout<<"inserisci la parte immaginaria: ";
	cin>>z.im;
}
void stampaComplex(const Complesso z)//stampa a video il numero complesso
{
	cout<<"z="<<z.re;
	if(z.im>0)
		cout<<"+"<<z.im<<"j"<<endl;
	else if(z.im<0)
		cout<<z.im<<"j"<<endl;
	else
		cout<<endl;
}
Complesso sommaComplex(const Complesso a, const Complesso b)//somma di due num complessi
{
	Complesso ris;
	ris.im=a.im+b.im;
	ris.re=a.re+b.re;
	
	return ris;
}
Complesso prodottoComplex(const Complesso a, const Complesso b)//prodotto di due num complessi
{
	Complesso ris;
	ris.re=a.re*b.re-a.im*b.im;
	ris.im=b.re*a.im+a.re*b.im;
	
	return ris;
}
double moduloComplex(const Complesso z)//calcolo modulo di un num complesso
{
	double modulo;
	modulo=sqrt(pow(z.re,2)+pow(z.im,2));
	return modulo;
}
void leggiElementi(Vettore vet, int &n)//read degli elementi di un vettore
{
	for(int i=0;i<n;i++)
		leggiComplex(vet[i]);
}
void stampaVettore(const Vettore vet, const int n)//stampa il vettore
{
	for(int i=0;i<n;i++){
		cout<<i+1<<")  ";
		stampaComplex(vet[i]);
	}
}
void moduloBubbleSort(Vettore vet, const int n)//ordina il vettore per modulo crescente
{
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(moduloComplex(vet[j])>moduloComplex(vet[j+1])){
				swap(vet[j].re,vet[j+1].re);
				swap(vet[j].im,vet[j+1].im);
			}
		}
	}
}
