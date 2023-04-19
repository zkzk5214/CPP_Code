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

    const Point operator-(const Point &point) const { 
        return Point(m_x-point.m_x, m_y-point.m_y);
    }

    Point &operator+=(const Point &point) { 
        //Point &引用 返回对象(return *this), Point * 返回地址值(return this)
        // &引用,减少中间对象的产生
        // 需要修改成员变量所以operator+= 后面不加 const
        m_x += point.m_x;
        m_y += point.m_y;
        return *this; // 取出this指针指向的东西,即当前对象,所以返回对象
    }

    bool operator==(const Point &point) const {
        // if ((m_x == point.m_x) && (m_y) == point.m_y){
        //     return 1;
        // } else {
        //     return 0;
        // } 
        return ((m_x == point.m_x) && (m_y) == point.m_y); // 等价
    }

    bool operator!=(const Point &point) const {
        return ((m_x != point.m_x) || (m_y) != point.m_y); // 等价
    }
};


int main() {

    Point p1(10,20);
    Point p2(20,30);
     
    // p1+=p2;
    (p1+=p2) = Point(50,60);
    // p1.operator+=(p2); // 相等于把p1的地址值传递给this,this指向p1对象
    p1.display();

    // cout << (p1==p2) << endl;

    cout << (p1!=p2) << endl;

	// getchar();
	return 0;
}