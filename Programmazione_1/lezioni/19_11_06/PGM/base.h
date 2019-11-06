#include <iostream>
#include <string>
using namespace std;
class base{
	private:
		string a;
	protected:
		string c;
	public:
		int n;
		base(): a(""), c(""), n(0){};
		base(const string, const string, const int);
		ostream& stampa(ostream&);
		string get_a(){return a;}
		string get_c(){return c;}
		int get_n(){return n;}
};


