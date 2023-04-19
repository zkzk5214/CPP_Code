#include <iostream>
using namespace std;
/*
1-在一个函数内部定义的类，称为局部类
2-局部类的特点
2.1-作用域仅限于所在的函数内部 
2.2-其所有的成员必须定义在类内部，不允许定义static成员变量 
2.3-成员函数不能直接访问函数的局部变量(static变量除外)
*/
int g_age = 10;

void test() {
	static int age = 10; // 加上 static 后相当于局部变量
    int m_price  = 10;

	// 局部类
	class Car { // 2.1
	public:
        // static int m_price; // 2.2
		void run() {
			age = 20;
            // m_price = 20; // 2.3
		}
	};

	Car car;
	car.run();
}
	



int main() {


	getchar();
	return 0;
}