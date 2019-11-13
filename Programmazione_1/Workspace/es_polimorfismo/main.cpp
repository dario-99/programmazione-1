#include <iostream>
#include "Shape.h"
using namespace Shapes;
using namespace std;

void virtualViaPointer(const Shape *baseClassPtr) {
	baseClassPtr->printShapeName();
	baseClassPtr->print();
	cout <<"\nArea = " << baseClassPtr->getArea() << "\nVolume = "
	<< baseClassPtr->getVolume() << "\n\n";
}
void virtualViaReference(const Shape &baseClassRef) {
	baseClassRef.printShapeName();
	baseClassRef.print();
	cout <<"\nArea = " << baseClassRef.getArea() << "\nVolume = "
	<< baseClassRef.getVolume() << "\n\n";
}
int main(int argc, char** argv) {
	Point point(7,11);
	Circle circle(3.5,22,8);
	Cylinder cylinder(10,3.3,10,10);
//	point.printShapeName(); // binding statico
//	point.print();
//	circle.printShapeName(); // binding statico
//	circle.print();
//	cylinder.printShapeName(); // binding statico
//	cylinder.print();
	
//	Via Pointer

//	Shape* shapesPtr[3];
//	shapesPtr[0] = &point;
//	shapesPtr[1] = &circle;
//	shapesPtr[2] = &cylinder;
//	for(int i=0; i<3; i++){
//		shapesPtr[i]->printShapeName();
//		shapesPtr[i]->print();
//		cout<<"Area: "<<shapesPtr[i]->getArea();
//		cout<<"\nVolume: "<<shapesPtr[i]->getVolume()<<endl<<endl;
//	}

//	Via Reference

	Shape& shaperef = point;
	shaperef.print();
	
	return 0;
}
