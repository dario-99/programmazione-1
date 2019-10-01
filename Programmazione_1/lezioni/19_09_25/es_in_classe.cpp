#include <iostream>
using namespace std;
struct point{
	float x;
	float y;
};
int main(){
	point p;
	point* ptr;
	
	cout<<"inserisci coordinate del punto p:"<<endl<<"x: ";
	cin>>p.x;
	cout<<"y: ";
	cin>>p.y;
	
	cout<<"punto p: "<<endl;
	cout<<"("<<p.x<<","<<p.y<<")"<<endl;
	
	ptr=&p;
	(*ptr).x=3;
	ptr->y=0;
	
	cout<<"punto p: "<<endl;
	cout<<"("<<p.x<<","<<p.y<<")"<<endl;
	
	cout<<&ptr->x<<"  "<<&ptr->y<<endl;
}
