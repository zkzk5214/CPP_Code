#include <iostream>
using namespace std;

/*
1-友元包括友元函数和友元类
2-如果将函数A(非成员函数)声明为类C的友元函数，那么函数A就能直接访问类C对象的所有成员
3-如果将类A声明为类C的友元类，那么类A的所有成员函数都能直接访问类C对象的所有成员
4-友元破坏了面向对象的封装性，但在某些频繁访问成员变量的地方可以提高性能
*/

class Point {
	friend Point add(Point, Point); // 2
	friend class Math;
    // friend Point Math::add(Point,Point); //类里面的成员函数不能单独定义为友元函数,除非定义为友元类
private:
	int m_x;
	int m_y;
public:
	int getX() { return m_x; };
	int getY() { return m_y; };
	Point(int x, int y) :m_x(x), m_y(y) {}
	void display() {
		cout << "(" << m_x << ", " << m_y << ")" << endl;
	}
};

Point add(Point p1, Point p2){
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
		Point p1(10, 20);
		p1.m_x = 10;
	}
};

int main() {

	Point p1(10, 20);
	Point p2(20, 30);
    Point p3 = add(p1,p2);

	// Point p3 = Math().add(p1, p2);
	p3.display();

	// getchar();
	return 0;
}