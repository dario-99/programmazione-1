
#include <iostream>
#include <cmath>
const int N=100;
using namespace std;
//dichiaro tipo, numero complesso
class Complesso
{
	private:
		float re;//parte reale
		float im;//parte immaginaria
	public:
		Complesso();//costruttore
		Complesso(const float,const float=1);
		void leggiComplex();//Read del num complesso da tastiera
		void stampaComplex() const;//stampa a video il numero complesso
		inline float get_re()const{return re;}
		inline float get_im()const{return im;}
		inline void set_re(float a){re=a;}
		inline void set_im(float a){im=a;}
		Complesso sommaComplex(const Complesso);//somma di due num complessi
		Complesso prodottoComplex(const Complesso);//prodotto di due num complessi
		double moduloComplex() const;//calcolo modulo di un num complesso
};
