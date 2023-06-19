#include <iostream>
using namespace std;
/*
1-Operator overload: Can add some new functionality to operators
2-Both global function and member function support operator overloading
*/

class Point {
	int m_x;
	int m_y;
public:
	Point(int x, int y) :m_x(x), m_y(y) {}
    Point(const Point &point): m_x(point.m_x), m_y(point.m_y){}
    void display() {
		cout << "x = " << this->m_x << ", y = " << this->m_y << endl;
	}
    /*
    The first "const"(const Point operator-):
        The return value is a constant, and operator- cannot 
        be called again.
    The last "const"(constant member function):
        Error while attempting to modify the data member
    */
    const Point operator+(const Point &point) const {
        return Point(m_x+point.m_x, m_y+point.m_y);
    }
    
    const Point operator-(const Point &point) const { 
        return Point(m_x-point.m_x, m_y-point.m_y);
    }
};

int main() {
    Point p1(10,20);
    Point p2(20,30);
    Point p3 = p2-p1;
    p3.display();

    /*
    int a = 10, b = 20;
    (a>b ? a:b) = 10; // if a>b return a else b
    Adding two values to return a temporary value cannot be assigned
        (a+b) = 10;
    Overloading operators takes into account the proporty of operators,
        so adding "const" to operator makes it unexecutable
        (p1+p2) = Point(20,20); 
    p1+p2 returns a const object that can no longer call operator+
        (non const)
        Point p4 = operator+( operator+(p1, p2) + p1);
    */
    Point p4 = p1+p2+p1; 
    
	// getchar();
	return 0;
}