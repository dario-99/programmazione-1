#include "Prodotto.h"
#include <string.h>
#include <fstream>
typedef Prodotto Magazzino[N];

void crea_magazzino(Magazzino &, int &);//passo il magazzino da riempire e il riempimento
int cerca_prodotto(const Magazzino,const int ,const stringa );//cerca nell magazzino l'elemento, passo il magazzino, il riempimento e il codice
void elimina_prodotto(Magazzino &,int &,int);//passo il magazzino, il riempimento e la posizione
void visualizza_magazzino(const Magazzino,const int);//passo il magazzino e il riempimento
void stampa_stato_magazzino(const Magazzino,const int);//passo il magazzino e il riempimento
