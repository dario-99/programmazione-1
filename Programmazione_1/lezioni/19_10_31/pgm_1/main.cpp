#include <iostream>

#include "derivata.h"
#include <string>
using namespace std;

int main(int argc, char** argv) {
	base b;
	base c("poll","poll",10);
	derivata d;
	stampa(cout,b);
	stampa(cout, c);
	return 0;
}
