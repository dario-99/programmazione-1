#include "Pila.h"
Pila::Pila(const int size):n(size){
	pila = new T[n];
	testa=0;
}
Pila::Pila(const Pila &p): n(p.n){
	pila = new T[n];
	testa = p.testa;
	for(int i=0; i<n; i++){
		pila[i] = p.pila[i];
	}	
}
bool Pila::empty()const{

}
bool Pila::full()const{
}
const Pila& Pila::operator=(const Pila& p){
	if(this != &p){
		delete [] pila;
		n = p.n;
		pila = new T[n];
		testa = p.testa;
		for(int i=0; i<n; i++){
			pila[i] = p.pila[i];
		}	
	}
	return *this;
}
bool Pila::pop(T& p){
	if(empty())
		return false;
	p = pila[testa];
	testa--;
	return true;
}
bool Pila::push(const T &p){
	if(full())
		return false;
	pila[testa] = p;
	testa++;
	return true;
}
bool Pila::top(T& p){
	if(empty())
		return false;
	p = pila[testa-1];
	return true;
}


