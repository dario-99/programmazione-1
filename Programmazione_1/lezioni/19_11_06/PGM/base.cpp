#include "base.h"
base::base(const string a, const string c, const int n){
	this->a = a;
	this->c = c;
	this->n = n;
}
ostream& base::stampa(ostream& out){
	out<<"a: "<<a<<endl;
	out<<"c: "<<c<<endl;
	out<<"n: "<<n<<endl;
	return out;
}

