
#include <iostream>
#include <cmath>
using namespace std;
//dichiaro tipo, numero complesso
typedef struct
{
	double re;//parte reale
	double im;//parte immaginaria
} Complesso;

//dichiaro tipo, vettore di numeri complessi
typedef Complesso Vettore[100];

//prototipi funzioni
void swap(double &a, double &b);//scambia due valori di tipo double

void leggiComplex(Complesso &);//Read del num complesso da tastiera

void stampaComplex(const Complesso);//stampa a video il numero complesso

Complesso sommaComplex(const Complesso, const Complesso);//somma di due num complessi

Complesso prodottoComplex(const Complesso, const Complesso);//prodotto di due num complessi

double moduloComplex(const Complesso);//calcolo modulo di un num complesso

void leggiElementi(Vettore vet, int &nelem);//read di una possizione dell vettore di complessi

void stampaVettore(const Vettore vet, const int n);//stampa un elemento del vettore

void moduloBubbleSort(Vettore vet, const int n);//ordina il vettore per modulo crescente
