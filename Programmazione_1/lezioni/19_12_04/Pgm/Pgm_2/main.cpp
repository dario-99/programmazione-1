#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
//int main(int argc, char** argv) {
//	ifstream output;
//	char path[100];
//	char nome[20];
//	char buffer[20];
//	char* cognome;
////	char g [3];
////	char m [3];
////	char a [3];
//	int g,m,a;
//	int altezza;
//	cout<<"inserisci path del file di Input: ";
//	cin.getline(path, 100);
//	output.open(path, ios::in);
//	char C;
//	if(!output){
//		cout<<"errore apertura!!"<<endl;
//	}
//	else{
//		output>>nome;
//		output>>buffer;
////		output.getline(g,2,'/');
////		output.getline(m,2,'/');
////		output.getline(a,2,'/');
//		output>>g>>C>>m>>C>>a;
//		output>>altezza;
//		cognome = new char [strlen(buffer) + 1];
//		strcpy(cognome, buffer);
//		cout<<nome<<endl;
//		cout<<cognome<<endl;
//		cout<<g<<"/"<<m<<"/"<<a<<endl;
//		cout<<"altezza: "<<altezza<<endl;
//		delete [] cognome;
//		output.close();
//	}
//	return 0;
//}

//secondo test
int main(int argc, char *argv[])
{
	fstream file1, file2;
	char c;
	char * sorgente=argv[1];
	if(argc != 3) {
		cout << "Specificare il nome del file sorgente e del file destinazione" << endl;
		cout << "Ripetere l'operazione" << endl;
	}
	else {
		file1.open(argv[1], ios::in);
	if (file1) {
		file2.open(argv[2], ios::out);
	while (( c=file1.get())!=EOF)
		file2.put(c);
		file1.close();
		file2.close();
	}
	else cout << "\n errore: non posso aprire il file sorgente " << sorgente;
	}
	system("PAUSE");
return 0; }
