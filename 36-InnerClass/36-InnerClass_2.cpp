#include <iostream>
using namespace std;
/*
内部类
1-如果将类A定义在类C的内部，那么类A就是一个内部类(嵌套类)
2-内部类的特点
2.1-支持public、protected、private权限
2.2-成员函数可以直接访问其外部类对象的所有成员(反过来则不行)
2.3-成员函数可以直接不带类名、对象名访问其外部类的static成员
不会影响外部类的内存布局
可以在外部类内部声明，在外部类外面进行定义
*/

class Person {
private:
    // 2.3
    static int m_age;
    static void test(){}

public:
	class Car { // Person类为Car的外部类
	private:
		int m_price; // 2.2

        void run(){
            // 2.3
            // Person::m_age = 10;
            // Person::test();
            // Person p;
            // p.m_age = 10;
            // p.test();
            // 2.3
            m_age = 10;
            test();
        }

	};
};

int main() {
	Person::Car car1; // 2.1
	Person::Car car2; 

	// Person person;

	// getchar();
	return 0;
}