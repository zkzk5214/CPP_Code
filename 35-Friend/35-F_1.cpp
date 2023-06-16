#include <iostream>
using namespace std;

/*
1-Friend include friend function and friend class.
2-If function A(non-member function) is declared a friend function of class C, 
	than function A has direct access to all members of class C.
3-If class A is declared a friend of class C, all member functions of class A
	have direct access to all members of class C.
4-Friend break the encapsulation of OOB, but can improve performance in certain
	places where member variable are frequently accessed.
*/

class Point {
	friend Point add(const Point &, const Point &); // 2
	friend class Math;
	// Member function cannot be defined as friend alone within a class 
	// 		unless it is defined as a friend class
    // friend Point Math::add(Point,Point);
private:
	int m_x;
	int m_y;
public:
	int getX() { return m_x; };
	int getY() { return m_y; };
	Point(){}
	Point(int x, int y) :m_x(x), m_y(y) {}
	void display() {
		cout << "(" << m_x << ", " << m_y << ")" << endl;
	}
};

Point add(const Point &p1, const Point &p2){
    // return Point(p1.getX()+p2.getX(),p1.getY()+p2.getY());
    return Point(p1.m_x+p2.m_x,p1.m_y+p2.m_y);
}

// 3
class Math {
public:
	Point add(Point p1, Point p2) {
		return Point(p1.m_x + p2.m_x, p1.m_y + p2.m_y);
	}
	void test() {
		Point point;
		point.m_x = 10;
		point.m_y = 20;
	}
	static void test2(){
		Point point;
		point.m_x = 10;
		point.m_y = 20;
	}
};

int main() {
	Point p1(10, 20);
	Point p2(20, 30);
    Point p3 = add(p1,p2);
	p3.display();

	Point p4 = Math().add(p1, p2);
	p4.display();

	// getchar();
	return 0;
}