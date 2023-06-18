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
    // Member function, private member variables can access
    Point operator+(const Point &point){ 
        return Point(m_x+point.m_x, m_y+point.m_y);
    }
};


int main() {
    Point p1(10,20);
    Point p2(20,30);

	// Point p3 = operator+(p1,p2);
    Point p3 = p1+p2;
    p3.display();

	// getchar();
	return 0;
}