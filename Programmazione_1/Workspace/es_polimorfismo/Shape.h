#ifndef _SHAPE_H
#define _SHAPE_H
#include <iostream>
#include <cmath>
using namespace std;
namespace Shapes{
	class Shape{
		public:
			virtual float getArea()const{return 0.0;}
			virtual float getVolume()const{return 0.0;}
			virtual void print()const=0;
			virtual void printShapeName()const=0;
	};
	//class Point
	class Point:public Shape{
		private:
			float x;
			float y;
		public:
			Point():x(0.0), y(0.0){}
			Point(float x1, float y1):x(x1), y(y1){}
			Point(Point &p):x(p.x), y(p.y){}
			virtual void printShapeName()const{
				cout<<"Point: \n";
			}
			virtual void print()const{
				cout<<"X:"<<x<<endl; 
				cout<<"Y:"<<y<<endl;
			}
	};
	//class Circle derives from Point
	class Circle: public Point{
		private:
			float radius;
			static const float PI = 3.14; 
		public:
			Circle():Point(), radius(0){}
			Circle(float x1, float y1, float r):Point(x1,y1), radius(r){}
			Circle(Circle &c):Point(c), radius(c.radius){}
			virtual void printShapeName()const{
				cout<<"Circle: \n";
			}
			virtual void print()const{
				Point::print();
				cout<<"Radius: "<<radius<<endl;
			}
			virtual float getArea()const{
				return PI*pow(radius, 2);
			}
			float getPerimeter()const{
				return 2*PI*radius;
			}
	};
	//class cylinder
	class Cylinder: public Circle{
		private:
			float height;
		public:
			Cylinder():Circle(), height(0.0){}
			Cylinder(float x1, float y1, float r, float h):Circle(x1,y1,r), height(h){}
			Cylinder(Cylinder &c):Circle(c),height(c.height){}
			virtual void printShapeName()const{
				cout<<"Cylinder: ";
			}
			virtual void print()const{
				Circle::print();
				cout<<"Height: "<<height<<endl;
			}
			virtual float getArea()const{
				return Circle::getPerimeter()*height;
			}
			virtual float getVolume()const{
				return Circle::getArea()*height;
			}
	};
}

#endif
