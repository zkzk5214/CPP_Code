#include <iostream>
using namespace std;

/*
运算符重载(操作符重载):可以为运算符增加一些新的功能
*/

class Point {
	
    // friend Point add(Point, Point);
    friend Point operator+(Point, Point);

	int m_x;
	int m_y;
public:
	Point(int x, int y) :m_x(x), m_y(y) {}
	void display() {
		cout << "(" << m_x << ", " << m_y << ")" << endl;
	}
};

// Point add(Point p1, Point p2){
//     return Point(p1.m_x+p2.m_x,p1.m_y+p2.m_y);
// } 

Point operator+(Point p1, Point p2){
    cout << "Point operator+(Point, Point)"<< endl;
    return Point(p1.m_x+p2.m_x, p1.m_y+p2.m_y);
}

int main() {

    Point p1(10,20);
    Point p2(20,30);

    // Point p3 = operator+(p1,p2);
    // Point p3 = p1+p2; // 等价上面一句
    // p3.display();

    Point p3(30, 40);
    // Point p4 = operator+( operator+(p1,p2) + p3);
	Point p4 = p1 + p2 + p3; // 等价上面一句
	p4.display();

	// getchar();
	return 0;
}