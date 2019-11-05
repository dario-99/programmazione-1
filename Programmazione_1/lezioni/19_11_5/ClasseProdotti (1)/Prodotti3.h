#ifndef _PRODOTTO_H
#define _PRODOTTO_H
#include <iostream>
#include <cstring>
using namespace std;


namespace NS{

class Prodotto {  
      
friend  ostream & operator<<(ostream &, const Prodotto &);
friend  istream & operator>>(istream &, Prodotto &);
protected:
	istream& Inserisci_DatiProdotto(istream&);
public:  
Prodotto() : Qta(0){strcpy(Codice,""); Descrizione= new char [1]; strcpy(Descrizione,"");}      
Prodotto(const char *, const char *, const int);
Prodotto(const Prodotto & C);
const Prodotto & operator=(const Prodotto & C);

//void Visualizza_DatiProdotto() const;
int get_Q() const {return Qta;}
const char * get_Cod() const {return Codice;}
const char * get_Des() const {return Descrizione;}
void set_Cod(const char * s) {strcpy(Codice,s);}

void set_Des(const char * s) 
{
delete [] Descrizione; 
Descrizione=new char[strlen(s)+1];
strcpy(Descrizione,s);
}

void set_Q(const int n){Qta=n;}
~Prodotto() {delete [] Descrizione; }

private:     
	static const int DIM=100; 
    char Codice[DIM];
    char * Descrizione;
    int Qta;
}; 
}
#endif
