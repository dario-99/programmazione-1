#include "Voce.h"
#pragma once
typedef Voce Elenco[N];
void read(Elenco &,const int);//inizializza un elenco, avendo già a disposizione la dimensione massima
void write(const Elenco,const int);//stampa a video l'elenco 
bool in(const Elenco,const int,const Voce,int &);//controlla se la voce è presente nell'elenco, incoltre ritorna la pos per riferimento,pos=-1 se non torva nulla
void sort(Elenco &,const int);//ordina l'elenco
bool isFull(const Elenco,const int);//stabilisice se l'elenco e' pieno
bool isEmpty(const Elenco,const int);//stabilisce se l'elenco e' vuoto
void insert(Elenco &,int &,const Voce);//inserisce un elemento e 
void insert_ord(Elenco &,int &,const Voce);//si applica ad un elenco ordinato, e inserisce la voce nella posizione giusta
bool remove(Elenco &,int &,const Voce);//elimina la voce se e presente nell elenco ritornando true, altrimenti ritorna false
bool is_sorted(const Elenco,const int);//controlla se l'elenco e' ordinato,in caso affermativo return true, altimenti return false
