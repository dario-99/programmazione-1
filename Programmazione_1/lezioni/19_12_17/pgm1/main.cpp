#include <iostream>
#include <cassert>
using namespace std;

int main(int argc, char** argv) {
	int d=7;
	int *q = &d;
	assert(d>4);
	assert(q);
	return 0;
}
