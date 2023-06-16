#include <iostream>
using namespace std;
/*
Inner Class
1-Class A is an inner class(nested class) if it is defined inside class C
2-Properties of inner class
	2.1-Support public, protected, private
	2.2-Member function have direct access to all member of an object of 
		its outer class(not vice versa).
	2.3-Member function can access the static members of its outter class 
		directly without the class name or object name.
	2.4-Does not affect the memory layout of external class.
	2.5-Function prototype can be inside the outter class, and function 
		definition can be outside the outter class.
*/

class Point {
	static void test1(){
		cout << "Point::test1()" << endl;
	}
	static int ms_test2;
	int m_x;
	int m_y;
public:
	class Math {
	public:
		void test3(){
			cout << "Point::Math::test3()"<<endl;
			test1(); 		// 2.3
			ms_test2 = 10;	// 2.3

			Point point;
			point.m_x = 10;
			point.m_y = 20;
		}
	};
};


int main() {
	Point::Math m1;
	Point::Math m2; 

    Point p; // 2.4, only the access permissions change
	
	// getchar();
	return 0;
}