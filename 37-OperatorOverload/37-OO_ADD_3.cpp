#include <iostream>
using namespace std;
/*
1-Operator overload: Can add some new functionality to operators
2-Both global function and member function support operator overloading
*/

class Point {
	int m_x;
	int m_y;
    friend Point operator+(const Point &, const Point &);
public:
	Point(int x, int y) :m_x(x), m_y(y) {}
    Point(const Point &point): m_x(point.m_x), m_y(point.m_y){}
	void display() {
		cout << "x = " << this->m_x << ", y = " << this->m_y << endl;
	}
};

// & reference to reduce the generation of intermediate objects
// const reference can take (non)const arguments
Point operator+(const Point &p1, const Point &p2){
    return Point(p1.m_x+p2.m_x, p1.m_y+p2.m_y);
}

int main() {
    const Point p1(10,20);
    Point p2 = p1;

	// getchar();
	return 0;
}
