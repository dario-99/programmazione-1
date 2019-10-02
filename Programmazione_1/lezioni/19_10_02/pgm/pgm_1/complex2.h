
#include <iostream>
#include <cmath>
const float pi=3.14;
const int N=100;
using namespace std;
//dichiaro tipo, numero complesso
struct Complesso
{
	float re;//parte reale
	float im;//parte immaginaria
	
	Complesso();//costruttore
	Complesso(const float,const float=1);
	void leggiComplex();//Read del num complesso da tastiera
	
	void stampaComplex() const;//stampa a video il numero complesso
	
	Complesso sommaComplex(const Complesso);//somma di due num complessi
	
	Complesso prodottoComplex(const Complesso);//prodotto di due num complessi
	
	double moduloComplex() const;//calcolo modulo di un num complesso
};
