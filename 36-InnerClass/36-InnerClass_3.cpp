#include <iostream>
using namespace std;
/*
内部类
1-如果将类A定义在类C的内部，那么类A就是一个内部类(嵌套类)
2-内部类的特点
2.1-支持public、protected、private权限
2.2-成员函数可以直接访问其外部类对象的所有成员(反过来则不行)
2.3-成员函数可以直接不带类名、对象名访问其外部类的static成员
2.4-不会影响外部类的内存布局
2.5-可以在外部类内部声明，在外部类外面进行定义
*/

// 内部类-声明和实现分离
// ex1
// class Point{
//     class Math{
//         void test();
//     };
// };

// void Point::Math::test(){}

// ex2
// class Point{
//     class Math;
// };

// class Point::Math{
//     void test(){}
// };

// ex3
class Point{
    class Math;
};

class Point::Math{
    void test();
};

void Point::Math::test(){}

int main() {
	// getchar();
	return 0;
}