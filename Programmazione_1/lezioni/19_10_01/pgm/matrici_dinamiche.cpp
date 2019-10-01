#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int * * M;
	int r, c;
	
	cout<<"inserisci il num di righe: ";
	cin>>r;
	
	cout<<"inserisci il num di colonne: ";
	cin>>c;
	
	M = new int * [r];
	for(int i=0;i<r;i++){
		M[i] = new int [c];
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"inserisci: ";
			cin>>M[i][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<M[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<r;i++){
		delete [] M[i];
	}
	delete [] M;
	return 0;
}
