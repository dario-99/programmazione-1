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
		
		friend ostream& stampa(ostream& out, const derivata b){
			base::stampa(out,b);
			out<<"f: "<<b.f<<endl;
			return out;
		}
 };
