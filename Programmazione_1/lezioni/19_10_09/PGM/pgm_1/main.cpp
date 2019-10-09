#include <iostream>
#include "complex2.h"
using namespace std;

int main(int argc, char** argv) {
	Complesso c1(3,4), c2, somma, prodotto;
	Complesso *c3= new Complesso(3,4);
	Complesso c4(3.11);
	c3->stampaComplex();
	delete c3;
	c1.stampaComplex();
	c2.stampaComplex();
	c4.stampaComplex();
	//acquisizione dati 
	cout << "\n Lettura di C1: \n";
	c1.leggiComplex();
	cout << "\n Lettura di C2: \n";
	c2.leggiComplex();
	//modulo
	cout << "\n Il modulo di C1: " << c1.moduloComplex();
	cout << "\n Il modulo di C2: " << c2.moduloComplex();
	//somma 
	somma=c1.sommaComplex(c2);
	cout << "\n somma: ";
	somma.stampaComplex();
	//prodotto 
	
	prodotto=c1.prodottoComplex(c2);
	cout << "\n prodotto: ";
	prodotto.stampaComplex();

	return 0;
}
