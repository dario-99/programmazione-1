#include <iostream>
#include "Lista.h"
using namespace std;

int main(int argc, char** argv) {
//	Record r;
//	r.info = 3;
//	r.next = 0;
//	Record *t = new Record;
//	t->info = 4;
//	t->next = 0;
//	Record *p = new Record;
//	p->info = 5;
//	p->next = 0;
//	Record *q = new Record;
//	q->info = 6;
//	q->next = 0;
//
//	
//	t->next = p;
//	t->next->next = q;
//	cout<<(t->next)->next->info;
//	
//	delete t;
//	delete p;
//	delete q;
	Elenco p;
	T elem = 10;
	for(int i=0; i<10; i++){
		p.append(elem+i);
	}
	cout<<p;
	cout<<"Poollooo"<<endl;
	for(int i=0; i<5; i++){
		p.pop(elem);
	}
	cout<<p;
	
	return 0;
}
