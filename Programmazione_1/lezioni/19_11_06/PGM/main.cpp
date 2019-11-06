#include <iostream>

#include "derivata.h"
#include <string>
using namespace std;

int main(int argc, char** argv) {
	base b;
	base c("poll","poll",10);
	derivata d;
	nipote n("poll","poll",10, 10.5, 'a');
	b.stampa(cout);
	cout<<"------------------------------"<<endl;
	c.stampa(cout);
	cout<<"------------------------------"<<endl;
	d.stampa(cout);
	cout<<"------------------------------"<<endl;
	n.stampa(cout);
	cout<<"------------------------------"<<endl;
	cout<<n.get_z();
	return 0;
}
