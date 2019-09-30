#include <iostream>
#include <string.h>
using namespace std;
const int N=100;
int elimina_maiuscole(char* s){
	int l=strlen(s);
	int cont=0;
	for(int i=0;i<l;i++){
		if(isupper(s[i])){
			for(int j=i;j<l-1;j++){
				s[j]=s[j+1];
			}
			i--;
			s[l-1]='\0';
			cont++;
		}
	}
	return cont;
}
int main(int argc, char** argv) {
	char s[N];
	int n;
	cout<<"inserisci la stringa: ";
	cin.getline(s,N);
	n=elimina_maiuscole(s);
	cout<<"stringa: "<<s<<endl;
	cout<<"sono stati eliminati "<<n<<" caratteri maiuscoli"<<endl;
	return 0;
}
