#include <iostream>
#include <cstdlib>
#include <fstream>


#include "magazzino3.h"
#include "alimentare.h"
using namespace std;
using NS::Prodotto;
using NS::Alimentare;
int main(int argc, char *argv[])
{
	Prodotto p1;
	Prodotto p2("P1", "Tavolo", 20);
	Alimentare a1;
	Alimentare a2("A2", "Pollo", 15, "Italia", 12);
	cout<<p1<<endl;
	cout<<p2<<endl;
	p1 = a2;
	cout<<a2;
	Prodotto* ptr;
	Alimentare * aptr;
	ptr = &p2;
	
	ptr = &a2;
	
	
	system("PAUSE");
	return 0;
}





