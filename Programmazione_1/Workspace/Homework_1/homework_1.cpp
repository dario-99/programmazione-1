/***************************************************************************
	Auth:	Dario Di Meo
	classe: ING-INF (A-I)
	Pgm:	Numeri Complessi
	Date:   21/09/19
***************************************************************************/


//direttive al Pre-compilatore
#include <iostream>
#include "complex.h"
using namespace std;


//main
int main(int argc, char** argv) {
	Vettore V;
	Complesso C;
	int n=4;
	cout << " Inserimento del vettore di numeri complessi."<<endl;
	leggiElementi(V,n);
	cout <<"Stampa del vettore inserito."<<endl;
	stampaVettore(V,n);
	cout << "\n";
	cout << "\n Stampa sequenziale dei moduli nel vettore non ordinato.";
	cout << "\n";
	for (int i=0; i<n; i++)
	  cout << moduloComplex(V[i])<< endl;
	cout << "\n";
	cout << "\n Ordino il vettore per moduli crescenti.";
	moduloBubbleSort(V,n);
	cout << "\n Fatto.";
	cout << "\n Stampa sequenziale dei moduli nel vettore ordinato.";
	cout << "\n";
	for (int i=0; i<n; i++)
	  cout << moduloComplex(V[i])<< endl;
	cout << "\n";   

	return 0;
}
