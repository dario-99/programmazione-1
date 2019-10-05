#include <iostream>
#include "Voce.h"
#include "Elenco.h"
using namespace std;
//main per il test della libreria Voce
/*
int main(int argc, char** argv) {
	Voce v1,v2;
	
	v1.read();
	v2.read();
	if(v1.greater_than(v2))
		cout<<"v1 e' maggiore di v2!"<<endl;
	else
		cout<<"v1 e' minore o uguale a v2"<<endl;
	if(v1.equal(v2))
		cout<<"v1 e' uguale a v2"<<endl;
	else
		cout<<"v1 e' diverso da v2"<<endl;
	v1.copy(v2);
	v1.write();
	v2.write();
	if(v1.equal(v2))
		cout<<"v1 e' uguale a v2"<<endl;
	else
		cout<<"v1 e' diverso da v2"<<endl;
	if(v1.greater_than(v2))
		cout<<"v1 e' maggiore di v2!"<<endl;
	else
		cout<<"v1 e' minore o uguale a v2"<<endl;
	v1.destroy();
	v2.destroy();
	return 0;
}*/

//main per il test della libreria Elenco
int main(){
	Elenco e1;
	//Voce v1;
	//int pos;
	int dim1;
	cout<<"inserisci la dimensione dell'elenco: ";
	cin>>dim1;
	//v1.read();
	read(e1,dim1);
	write(e1,dim1);
	/*if(in(e1,dim1,v1,pos)){
		cout<<"la voce e' presente nell'elenco nella posizione "<<pos<<endl;
	}
	else{
		cout<<"la voce non è presente"<<endl;
	}
	*/
	sort(e1,dim1);
	write(e1,dim1);
	

}
