#include "Voce.h"
void Voce::create(){
	chiave=0;
	descrizione=0;
}
void Voce::read(){
	char a[N];
	cout<<"inserisci chiave Voce: ";
	cin>>chiave;
	cout<<"inserisci descrizione del prodotto: ";
	cin.ignore();
	cin.getline(a,N);
	descrizione=new char[strlen(a)];
	strcpy(descrizione,a);
}

void Voce::write()const{
	cout<<"\t Chiave: "<<chiave<<endl;
	cout<<"\t Descrizione: "<<descrizione<<endl;
}
void Voce::copy(const Voce v){
	chiave=v.chiave;
	delete [] descrizione;
	descrizione = new char [strlen(v.descrizione)];
	strcpy(descrizione,v.descrizione);
}
bool Voce::equal(const Voce v)const{
	bool equal=true;
	if(chiave!=v.chiave)
		 equal=false;
	else if(strcmp(descrizione,v.descrizione)!=0)
		equal=false;
	return equal;
}
bool Voce::greater_than(const Voce v)const{
	bool greater=false;
	if(chiave>v.chiave)
		greater=true;
	return greater;
}
void Voce::destroy(){
	chiave=0;
	delete [] descrizione;
	descrizione=0;
}
