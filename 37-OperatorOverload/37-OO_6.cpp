 #include <iostream>
using namespace std;

/*
单目运算符
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

    const Point operator-() const {
        // 第一个const: -p1 = Point(10,20); 使其不允许实现
        // 第二个const: -(-p1); 使其可以实现
        return Point(-m_x, -m_y); // 返回临时的point对象 
    }

    Point &operator++(){ // 前置++
        m_x++;
        m_y++;
        return *this;
    }
    const Point operator++(int){ // 后置++
        Point old(m_x,m_y); // 临时对象 
        m_x++;
        m_y++;
        return old;
    }
};


int main() {

    Point p1(10,20);
    Point p2(20,30);
    // -p1;
    // Point p3 = -p1;
    Point p3 = -(-p1);

    // ++p1;
    ++p1 = Point(1,2);
    // p1++; 
    Point p4 = p1++ + Point(30,40);
    
    // int a = 10;
    // int b = ++a + 5; // a+=1; int b = a+5; ++a 可以被赋值
    // int c = a++ + 5; // int c = 10(a)+5; a+=1; a++ 不能被赋值

    p1.display();
    p3.display();

	// getchar(); 
	return 0;
}