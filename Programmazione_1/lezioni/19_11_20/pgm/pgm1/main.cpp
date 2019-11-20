
#include <stdlib.h>
#include <cstring>
#include <iostream>

using namespace std;

// Quando un metodo di una classe richiama un altro metodo virtuale deve fare attenzione,
// magari deve chiamarlo con il risolutore di visibilita'


//
//void Lettura(char** *Elenco, int &ContParole)
//{
//	ContParole = 0;
//	(*Elenco) = NULL;
//	char Buffer[100];
//	bool Leggi = true;
//	while( Leggi )
//	{
//		if( !strncmp(Buffer,"Esc",3) )
//			Leggi = false;
//		else
//		{
//			fgets(Buffer,90,stdin);
//			(*Elenco) = (char**) realloc(*(*Elenco),ContParole+1);
//			(*Elenco)[ContParole] = (char*) malloc( strlen(Buffer)+1 );
//			strcpy( (*Elenco)[ContParole], Buffer );
//			ContParole++;
//		}
//	}
//}
//


int main()
{
//	int ContParole = 0;
//	char **Elenco = NULL;
//	
//	Lettura(&Elenco,ContParole);
//	
//	for(int I=0; I<ContParole; I++)
//		free( Elenco[I] );
//	free(Elenco);
//	
	return 0;
}



