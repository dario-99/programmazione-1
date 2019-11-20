#ifndef _PILA_H
#define _PILA_H
#include <iostream>
using namespace std;

typedef int T;
class Pila{
	private:
		T* pila;
		int testa;
		int n;
	public:
		Pila(const int t = 10);
		Pila(const Pila &p);
		~Pila(){delete [] pila;}
		bool empty()const;
		bool full()const;
		const Pila& operator=(const Pila& p);
		bool pop(T& p);
		bool push(const T &p);
		bool top(T &);
};
#endif
