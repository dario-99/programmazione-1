#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int i=10;
	int &b=i;
	int &c=b;
	
	cout<<b<<endl;
	cout<<c<<endl;
	b=30;
	cout<<b<<endl;
	cout<<c<<endl;
	return 0;
}
