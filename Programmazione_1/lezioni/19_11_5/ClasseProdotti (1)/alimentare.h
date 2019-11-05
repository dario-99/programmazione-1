#ifndef _ALIMENTARE_H
#define _ALIMENTARE_H
#include "Prodotti3.h"


namespace NS{
	class Alimentare : public Prodotto{
		private:
			char* Origine;
			int Scadenza;
		protected:
			istream& Inserisci_DatiProdotto(istream& );
		public:
			Alimentare();
			Alimentare(const char *, const char *, const int, const char*, const int);
			Alimentare(const Alimentare &);
			const char* get_o(){return Origine;}
			int get_s()const {return Scadenza;}
			const Alimentare& operator=(const Alimentare&);
			friend  ostream & operator<<(ostream &, const Alimentare &);
			friend  istream & operator>>(istream &, Alimentare &);
			~Alimentare(){delete [] Origine;}
};
}//namespace
#endif
