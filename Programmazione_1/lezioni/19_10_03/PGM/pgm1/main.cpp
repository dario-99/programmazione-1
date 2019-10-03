#include <iostream>
using namespace std;
inline void stampa(int a){
	cout<<a<<endl;
}
int main(){
	int *a=new int [10];
	for(int i=0;i<10;i++){
		a[i]=20+i;
	}
	for(int i=0;i<10;i++){
		stampa(a[i]);
	}
	return 0;
}

