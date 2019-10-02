#include "complex2.h"

Complesso::Complesso(){
	re=0;
	im=0;
}
Complesso::Complesso(const float a,const float b){
	this->re=a;
	this->im=b;
}
void Complesso::leggiComplex()//Read del num complesso da tastiera
{
	cout<<"inserisci la parte reale: ";
	cin>>re;
	cout<<"inserisci la parte immaginaria: ";
	cin>>im;
}
void Complesso::stampaComplex() const//stampa a video il numero complesso
{
	cout<<"z="<<re;
	if(im>0)
		cout<<"+"<<im<<"j"<<endl;
	else if(im<0)
		cout<<im<<"j"<<endl;
	else
		cout<<endl;
}
Complesso Complesso::sommaComplex(const Complesso b)//somma di due num complessi
{
	Complesso ris;
	ris.im=im+b.im;
	ris.re=re+b.re;
	
	return ris;
}
Complesso Complesso::prodottoComplex(const Complesso b)//prodotto di due num complessi
{
	Complesso ris;
	ris.re=re*b.re-im*b.im;
	ris.im=b.re*im+re*b.im;
	
	return ris;
}
double Complesso::moduloComplex() const//calcolo modulo di un num complesso
{
	double modulo;
	modulo=sqrt(pow(re,2)+pow(im,2));
	return modulo;
}

