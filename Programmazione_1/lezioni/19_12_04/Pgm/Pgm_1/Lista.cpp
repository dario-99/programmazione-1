#include "Lista.h"
bool Elenco::push(const T &a){
	if(full())return false;
	Record* q = new Record;
	q->info = a;
	q->next = testa;
	testa = q;
	return true;
}
bool Elenco::empty()const{
	return testa==0;
}
bool Elenco::full()const{
	return false;
}
bool Elenco::top(T &a)const{
	if(empty()) return false;
	
	a = testa->info;
	return true;
}
bool Elenco::pop(T & a){
	if(full()) return false;
	Record* q = testa;
	//q = testa;
	a = testa->info;
	testa = testa->next; 
	delete q;
	return true;
}
Elenco::~Elenco(){
	Record * q;
	while(testa){
		q = testa;
		testa = testa->next;
		delete q;
	}
}
bool Elenco::append(const T& a){
	if(full()) return false;
	if(empty()) push(a);
	else{
		Record* q = new Record;
		q->info = a;
		q->next = 0;
		Record* temp = testa;
		while(temp->next != 0)
			temp = temp->next;
		temp->next = q;
	}
	return true;
}
ostream& operator<<(ostream& out, const Elenco& e){
	Record* temp = e.testa;
	while(temp->next!=0){
		out<<"elemento: "<<temp->info<<endl;
		temp=temp->next;
	}
	return out;
}
