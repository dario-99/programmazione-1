#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;
struct Record{
	char nome[20];
	int codice;
	int numTel;
};
int main(int argc, char** argv) {
	
//	char a[20];
//	Record r;
//	cout << "Inserisci il nome del file da creare: ";
//	cin >> a;
//	ofstream outfile(a, ios::binary|ios::out);
//	
//	cout<<"inserisci codice, nome, e num i tel: "<<endl;
//	while(cin >> r.codice >> r.nome >> r.numTel){
//	outfile.write(reinterpret_cast<const char *>(&r),sizeof(Record));
//	cout << "->";
//	}
//	outfile.close();
//	system("PAUSE");
//	

	char a[20];
	cout << "Inserisci il nome del file da leggere: ";
	cin >> a;
	ifstream infile(a, ios::binary|ios::in);
	Record r;
	int n=0;
	cout << "Visualizzazione del file: quanti record vuoi leggere? \n";
	cin >> n;
	for(int i=0; i<n; i++) {
	cout << "\n posizione in lettura: " << infile.tellg() << endl;
	infile.seekg(i*sizeof(Record), ios_base::beg);
	if (infile.read(reinterpret_cast<char *>(&r), sizeof(Record)))
	cout << "\n" << r.codice << " " << r.nome << " " << r.numTel;
	else break;
	}
	cout << endl;
	infile.close();
	system("PAUSE");

	return 0;
}
