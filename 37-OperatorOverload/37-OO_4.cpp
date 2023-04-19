 #include <iostream>
using namespace std;

/*
1-运算符重载(操作符重载):可以为运算符增加一些新的功能
2-全局函数、成员函数都支持运算符重载
*/

class Point {
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
    
    const Point operator+(const Point &point) const { // 成员函数,私有成员变量可以访问
        return Point(m_x+point.m_x, m_y+point.m_y);
    }

    const Point operator-(const Point &point){ // const operator- 返回值是一个常量对象,不允许再调用 operator-
        return Point(m_x-point.m_x, m_y-point.m_y);
    }
};


int main() {

    Point p1(10,20);
    Point p2(20,30);
    Point p3 = p2-p1;
    p3.display();

    // int a = 10, b = 20;
    // (a>b ? a:b) = 10; // if a>b return a else b
    // (a+b) = 10; //两个值相加返回一个临时值是不能被赋值的
    // (p1+p2) = Point(20,20); //做运算符重载的时候要考虑到之前运算符的特性,所以在 operator 前加 const 使其不可执行

    Point p4 = p1+p2+p1; // p1+p2返回的是一个const对象 不可以再调用 operator+(非const),所以在 operator+ 后面再加一个const
    // Point p4 = operator+( operator+(p1,p2) + p1);

	// getchar();
	return 0;
}