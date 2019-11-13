#ifndef _POINT_H
#define _POINT_H
#include <iostream>
using namespace std;
namespace Shapes{
	class Point{
		public:
			virtual float getArea()const{return 0.0};
			virtual float getVolume()const{return 0.0};
			virtual void print()const=0;
};


}

#endif
