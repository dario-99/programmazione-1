#include <iostream>
#include <fstream>
using namespace std;
struct clientela{
	int accountNumber;
	char cognome[20];
	char nome[20];
	float balance;
};
int main(int argc, char** argv) {
	ofstream out("clienti.txt", ios::out | ios::binary);
	if(!out){
		cout<<"il file non è stato aperto correttamente!"<<endl;
		return 1;
	}
	else{
		clientela dataClient={0, "xxx", "xxx", 0};
		
	}
	return 0;
}
