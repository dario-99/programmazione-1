#ifndef _LISTA_H
#define _LISTA_H
#include <iostream>
using std::ostream;
using std::endl;
struct Record;
typedef int T;
struct Record{
	T info;
	Record* next;
};
class Elenco{
	friend ostream& operator<<(ostream& out, const Elenco&);
	private:
		Record* testa;
	public:
		Elenco(){testa = 0;}
		bool push(const T&);
		bool empty()const;
		bool full()const;
		bool top(T &)const;
		bool pop(T & a);
		bool append(const T&);
		~Elenco();
};

#endif
