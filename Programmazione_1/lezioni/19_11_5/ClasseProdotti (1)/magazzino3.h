#include "Prodotti3.h"
#include <cstring>

using namespace std;
using namespace NS;
typedef Prodotto Magazzino[100];

void Crea_Magazzino(Magazzino &, int &);
bool Elimina_Prodotto(Magazzino &,  int &, const int);
bool Cerca_Prodotto(const Magazzino &, const int, const char *, int &);
void Visualizza_Magazzino(ostream &, const Magazzino &, const int n);
//void Stampa_StatoMagazzino(const Magazzino &, const int n);

