#include <iostream>
#include <cstring>
using namespace std;
const int N=100;
char* input_nome();
void distruggi_nome(char * &);
int main(int argc, char** argv) {
	
	char *s;
	s=input_nome();
	cout<<s<<endl;
	distruggi_nome(s);
	return 0;
}
char* input_nome(){
	char buffer[N];
	cout<<"inserisci il tuo nome: ";
	cin.getline(buffer,N);
	char *p = new char [strlen(buffer)];
	strcpy(p,buffer);
	return p;
}
void distruggi_nome(char * &p){
	delete [] p;
	p=0;
}
