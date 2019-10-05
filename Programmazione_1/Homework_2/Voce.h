#include <iostream>
#include <string.h>
#pragma once
using namespace std;
const int N=100;
struct Voce{
	int chiave;//campo che identifica univocamente la Voce
	char* descrizione;//stringa allocata dinamicamente che contiene la descrizione della voce
	
	void create();
	void read();//legge da tastiera una voce
	void write()const;//stampa a video la Voce
	void copy(const Voce);//copia il contenuto di una voce in questa
	bool equal(const Voce)const;//controlla se le due Voci sono uguali
	bool greater_than(const Voce)const;//controlla se la voce è maggiore di un altra
	void destroy();//dealloca la voce, e la azzera
};
