#include <iostream>
#include "Array.hpp"
using namespace std;

class Point {
	friend ostream &operator<<(ostream &, const Point &);
	int m_x;
	int m_y;
public:
	Point(int x = 0, int y = 0) :m_x(x), m_y(y) {}
};

ostream &operator<<(ostream &cout, const Point &point) {
	return cout << "(" << point.m_x << ", " << point.m_y << ")";
};

int main(){

    // int *data = new int[10]; // data指针指向右边存储空间的第一个字节

    // Array<int> array(2);
    // array.add(10);
    // array.add(20);
    // array.add(30);

    // cout << array.get(0) << endl;
    // cout << array.size() << endl;

    // Array<void *> array; // 可以放任何类型的对象地址值

    // Array<int> array;
	// array.add(10);
	// array.add(20);
    // array.add(30);
	// cout << array << endl;

  	Array<Point> array;
	array.add(Point(1, 2));
	array.add(Point(3, 4));
	// array.remove(0);
	array.get(0);
	// array.insert(2, 33);

	// cout << array << endl;

    // getchar();
    return 0;
}