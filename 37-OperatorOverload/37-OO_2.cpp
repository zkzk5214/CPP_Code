#include <iostream>
using namespace std;

/*
1-运算符重载(操作符重载):可以为运算符增加一些新的功能
2-全局函数、成员函数都支持运算符重载
*/

class Point {
    // friend Point operator+(Point, Point);
    friend Point operator+(const Point &, const Point &);
	int m_x;
	int m_y;
public:
	Point(int x, int y) :m_x(x), m_y(y) {}
	void display() {
		cout << "(" << m_x << ", " << m_y << ")" << endl;
	}
    Point(const Point &point){ // 拷贝构造函数, 必须写&, 将地址值传入,不存在构建新的对象; const 引用可以接受(非)const参数
        m_x = point.m_x;
        m_y = point.m_y;
    }
};

Point operator+(const Point &p1, const Point &p2){ // 2-& 引用,减少中间对象的产生; const 引用可以接受(非)const参数
    cout << "Point operator+(Point, Point)"<< endl;
    return Point(p1.m_x+p2.m_x, p1.m_y+p2.m_y);
}

int main() {

    const Point p1(10,20);
    // Point p2(20,30);
    // p1+p2;

    Point p2 = p1;


	// getchar();
	return 0;
}