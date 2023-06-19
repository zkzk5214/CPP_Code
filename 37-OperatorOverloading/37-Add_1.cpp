#include <iostream>
using namespace std;
/*
1-Operator overload: Can add some new functionality to operators
2-Both global function and member function support operator overloading
*/

class Point {
public:
	int m_x;
	int m_y;
	Point(int x, int y): m_x(x), m_y(y) {}
	// Copy constructor, must write & to pass the address in, 
	// no new object is created. const reference can take 
	// (non)const arguments
    Point(const Point &point): m_x(point.m_x), m_y(point.m_y){}
	void display() {
		cout << "x = " << this->m_x << ", y = " << this->m_y << endl;
	}
};

Point operator+(const Point &p1, const Point &p2){
    return Point(p1.m_x+p2.m_x, p1.m_y+p2.m_y);
}

int main() {
    Point p1(10, 20);
    Point p2(20, 30);

 	// Point p3 = operator+(p1,p2);
    Point p3 = p1+p2;
    p3.display();

	// getchar();
	return 0;
}
