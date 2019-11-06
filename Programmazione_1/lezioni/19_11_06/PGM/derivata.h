#include "base.h"
 class derivata : public base{
 	private:
 		float f;
 	public:
 		derivata(): base(){
 			f = 0;
		 }
		derivata(const string a, const string c, const int n, const int f): base(a,c,n){
			this -> f = f;
		}
		float get_f(){return f;}
		//void set_derivata(const string a, const string c, const int n, const int f){
		
		ostream& stampa(ostream& out){
			this->base::stampa(out);
			out<<"f: "<<f<<endl;
			return out;
		}
 };
 class nipote: public derivata{
 	private:
 		char z;
 	public:
 		nipote(): derivata(){
 			z = 'a';
		 }
		nipote(const string a, const string c, const int n, const int f, const char c1): derivata(a,c,n,f){
			z = c1;
		}
		char get_z(){return z;}
		
		
		ostream& stampa(ostream& out){
			this->derivata::stampa(out);
			out<<"z: "<<z<<endl;
			return out;
		}
 		
 };
