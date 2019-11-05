#include "alimentare.h"
#include <cstring>
namespace NS{
	Alimentare::Alimentare():Prodotto(), Scadenza(0){
		Origine = new char [1];
		strcpy(Origine, "");
		Scadenza = 0;
	}
	Alimentare::Alimentare(const char * C, const char *D, const int Q, const char* O, const int S): Prodotto(C,D,Q), Scadenza(S){
		Origine = new char [strlen(O) + 1];
		strcpy(Origine, O);
	}
	Alimentare::Alimentare(const Alimentare &A): Prodotto(A), Scadenza(A.Scadenza){
		Origine = new char [strlen(A.Origine) + 1];
		strcpy(Origine, A.Origine);
	}
	const Alimentare& Alimentare::operator=(const Alimentare& A){
		if(this != &A){
			Prodotto::operator=(A);
			if(Origine)
				delete [] Origine;
			Origine = new char [strlen(A.Origine) + 1];
			strcpy(Origine, A.Origine);
			Scadenza = A.Scadenza;
		}
		return *this;
	}
	ostream& operator<<(ostream &out, const Alimentare &A){
		out<<(Prodotto &)A<<endl;
		out<< "Origine: "<<A.Origine<<endl;
		out<<"Scadenza: "<<A.Scadenza<<endl;
		return out;
	}
	istream& Inserisci_DatiProdotto(istream& in){
		
	}
	istream & operator>>(istream &in, Alimentare &A){
		
		
		return in;
	}
}
