#include "Elenco.h"

void read(Elenco &e,const int dim){
	for(int i=0;i<N;i++)
		e[i].create();
	if(dim<0||dim>N){
		cout<<"dimensione non accettabile!"<<endl;
	}else{
		for(int i=0;i<dim;i++){
			e[i].read();
		}
	}
}
void write(const Elenco e,const int dim){
	for(int i=0;i<dim;i++){
		cout<<"Voce "<<i+1<<")"<<endl;
		e[i].write();
	}
}
bool in(const Elenco e,const int dim,const Voce v,int &pos){
	bool found=false;
	int i=0;
	pos=-1;
	while(i<dim && found==false){
		if(e[i].equal(v)){
			found=true;
			pos=i;
		}
		else
			i++;
	}
	return found;
}
void sort(Elenco &e,const int dim){
	bool scambia=false;
	int j=dim-1;
	int i=0;
	Voce temp;
	temp.chiave=0;
	temp.descrizione=new char [N];
	do{
		scambia=false;
		for(i=0;i<j;i++){
			if(e[i].greater_than(e[i+1])){
				temp.copy(e[i]);
				e[i].copy(e[i+1]);
				e[i+1].copy(temp);
				scambia=true;
			}
		}
		j--;
	}while(scambia);
	temp.destroy();
}
bool isFull(const Elenco e,const int dim){
	bool full=true;
	for(int i=0;i<N;i++){
		if(e[i].descrizione==0)
			return false;
	}
	return true;
}
bool isEmpty(const Elenco e,const int dim){
	bool empty=true;
	for(int i=0;i<N;i++){
		if(e[i].descrizone!=0)
			return false;
	}
	return true;
}
void insert(Elenco &e ,int &dim ,const Voce v){
	bool found_free=false;
	int i=0;
	do{
		if(e[i].descrizione==0){
			found_free=true;
			e[i].copy(v);
		}
		i++;
	}while(found==false && i<N);
}
void insert_ord(Elenco &e,int &dim,const Voce v){
	if(is_sorted(e,dim)){
		int i=0;
		bool found
	}
	else
		cout<<"l'elenco non e' ordinato"<<endl;
}
bool remove(Elenco &e,int &dim,const Voce v){
	
}
bool is_sorted(const Elenco e,const int dim){
	for(int i=0;i<dim-1;i++){
		if(e[i].greater_than(e[i+1])==false)
			return false;
	}
	return true;
}
