#include <iostream>
using namespace std;

/*
1-仿函数:将一个对象当作一个函数一样来使用
对比普通函数,它作为对象可以保存状态(成员变量)
2-有些运算符不可以被重载:
    对象成员访问运算符: .
    域运算符: ::
    三目运算符: ?:
    sizeof
3-有些运算符只能重载为成员函数
    赋值运算符: =
    下标运算符: []
    函数运算符: ()
    指针访问成员: ->
*/


//int sum(int a, int b) {
//	return a + b;
//}

class Sum {
public:
	int m_age;
	int operator()(int a, int b) {
		if (m_age) {

		}
		return a + b;
	}

	void func() {
		m_age = 10;
	}
};

int main() {
	
	Sum sum;
	sum.m_age = 10;
	// sum.func();
	cout << sum(10, 20) << endl;

	// cout << sum.operator()(10, 20) << endl;

	getchar();
	return 0;
}