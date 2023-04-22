#include <iostream>
using namespace std;

/*
左移右移运算符
优先选择重载成员函数,不能满足需求再选择重载全局函数
*/

class Point {
    friend ostream &operator<<(ostream &, const Point &);
    friend istream &operator>>(istream &cin, Point &point);
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

// output stream -> ostream
ostream &operator<<(ostream &cout, const Point &point){ // 返回cout
// 系统自带的<<左边不能是const对象, 所以全局函数第一个参数不带const
    cout << "(" << point.m_x << ", " << point.m_y << ")"; 
    return cout;
}

// input stream -> istream
istream &operator>>(istream &cin, Point &point) {
    // 通过键盘输入来改变传递参数所以Point不能是const
	cin >> point.m_x;
	cin >> point.m_y;
	return cin;
}

int main() {

    Point p1(10,20);
    Point p2(20,30);

    cout << p1 << p2; // cout << p1 打印完返回 cout
    // cin >> p1 >> p2;

    p1.display();
    p2.display();

	// getchar(); 
	return 0;
}