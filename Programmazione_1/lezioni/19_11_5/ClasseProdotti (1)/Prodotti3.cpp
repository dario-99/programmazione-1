#include "Prodotti3.h"
namespace NS{

Prodotto::Prodotto(const char * C, const char * D, const int Q) {
    strcpy(Codice,C); 
    Descrizione=new char[strlen(D)+1];
    strcpy(Descrizione,D);   
    Qta=Q;                  
}

Prodotto::Prodotto(const Prodotto & C) {
    strcpy(Codice,C.Codice); 
    Descrizione=new char[strlen(C.Descrizione)+1];
    strcpy(Descrizione,C.Descrizione);   
    Qta=C.Qta;             
}

const Prodotto & Prodotto::operator=(const Prodotto & C) {  
      // A=A;
  if(this!=&C) {
      delete [] Descrizione;
      Descrizione=new char [strlen(C.Descrizione)+1];
      strcpy(Descrizione, C.Descrizione);
      strcpy(Codice,C.Codice);
      Qta=C.Qta;
      }
  return *this; 
}


istream& Prodotto::Inserisci_DatiProdotto(istream &in) {
    cin.ignore();
    char buffer[DIM];
    cout << "\n Fornire il Codice del Prodotto: ";
    in.getline(this->Codice, DIM);
    cout << "\n Fornire una breve descrizione del Prodotto: ";
    in.getline(buffer, DIM);
    this->set_Des(buffer);
    delete [] Descrizione; 
    Descrizione=new char[strlen(buffer)+1];
    strcpy(Descrizione,buffer);
    cout << "\n Fornire la quantita' disponibile in magazzino: ";
    in >> this->Qta; 
    return in;
}


/*
void Prodotto::Visualizza_DatiProdotto() const {
    cout << "\n *************************************";
    cout << "\n Codice Prodotto: " << Codice;
    cout << "\n Descrizione Prodotto: " << Descrizione;
    cout << "\n Disponibilita': " <<Qta; 
}
*/

ostream & operator<<(ostream & out, const Prodotto & P) {
out << P.Codice << ' ' << P.Descrizione << ' ' <<P.Qta; 
return out;
}


istream & operator>>(istream & in, Prodotto & P) {
    char buffer[100];
    in.getline(P.Codice, 100);
    in.getline(buffer, 100);
    P.set_Des(buffer);
    delete [] P.Descrizione; 
    P.Descrizione=new char[strlen(buffer)+1];
    strcpy(P.Descrizione,buffer);
    in >> P.Qta; 
return in;
}

}
