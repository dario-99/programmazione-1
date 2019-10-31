#include "base.h"
base::base(const string a, const string c, const int n){
	this->a = a;
	this->c = c;
	this->n = n;
}
ostream& base::stampa(ostream& out, const base b){
	out<<"a: "<<b.ge<<endl;
	out<<"c: "<<b.c<<endl;
	out<<"n: "<<b.n<<endl;
	return out;
}

