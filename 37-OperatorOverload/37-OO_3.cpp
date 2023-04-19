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
    // 2
    Point operator+(const Point &point){ // 成员函数,私有成员变量可以访问
        return Point(m_x+point.m_x, m_y+point.m_y);
    }
};


int main() {

    Point p1(10,20);
    Point p2(20,30);
    Point p3 = p1+p2;
    // p1+p2;
    // p1.operator+(p2); // 等价上一句
    p3.display();

	// getchar();
	return 0;
}