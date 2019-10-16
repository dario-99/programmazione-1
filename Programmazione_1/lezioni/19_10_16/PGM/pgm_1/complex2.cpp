#include "complex2.h"

Complesso::Complesso(): re(0.0), im(0.0){
	re=0;
	im=0;
}
Complesso::Complesso(const float a,const float b){
	re=a;
	im=b;
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
Complesso Complesso::operator+(const Complesso b)//somma di due num complessi
{
	Complesso ris;
	ris.im=im+b.im;
	ris.re=re+b.re;
	
	return ris;
}
Complesso Complesso::operator*(const Complesso b)//prodotto di due num complessi
{
	Complesso ris;
	ris.re=re*b.re-im*b.im;
	ris.im=b.re*im+re*b.im;
	
	return ris;
}
Complesso Complesso::operator+(const float a){
	Complesso ris;
	ris.im=im;
	ris.re=re+a;
	
	return ris;
}
double Complesso::moduloComplex() const//calcolo modulo di un num complesso
{
	double modulo;
	modulo=sqrt(pow(re,2)+pow(im,2));
	return modulo;
}
Complesso operator+(const float a,const Complesso c1){
	Complesso ris;
	ris.re=c1.re+a;
	ris.im=c1.im;
	return ris;
}
ostream& operator<<(ostream &out,const Complesso &c1){
	out<<"z="<<c1.re;
	if(c1.im>0)
		out<<"+"<<c1.im<<"j"<<endl;
	else if(c1.im<0)
		out<<c1.im<<"j"<<endl;
	else
		out<<endl;
	return out;
}
istream& operator>>(istream &in,const Complesso &c1){
	in.ignore(100,'\n');
	in>>c1.re;
	in.ignore(100,'\n');
	in>>c1.im;
	return in;
}
