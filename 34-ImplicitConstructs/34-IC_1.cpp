#include <iostream>
using namespace std;

/* 隐式构造
1-C++中存在隐式构造的现象:某些情况下,会隐式调用 单参数(多个参数除了第一个参数有默认值也是可以的) 的构造函数
2-可以通过关键字explicit禁止掉隐式构造
*/

class Person {
	int m_age;
public:
	Person() {
		cout << "Person() - " << this << endl;
	}
	Person(int age) :m_age(age) {
		cout << "Person(int) - " << this << endl;
	}
	Person(const Person &person) {
		cout << "Person(const Person &person) - " << this << endl;
	}
	~Person() {
		cout << "~Person() - " << this << endl;
	}
	void display() {
		cout << "display() - age is " << m_age << endl;
	}
};

void test1(Person person) {}

Person test2() {
	return 40;
}

int main() {
	// 1

	// Person p1 = 20; // 调用单参数的构造函数
	// Person p2(20); // 等价上一行代码

    // test1(30); //相当于把 30 赋值给 person

	// test2(); // 将 40 传递给 person 单参数的构造函数

	Person p1;
	p1 = 40; // 调用无参的构造创建一个p1,再利用40构建一个临时的person对象,产生一次隐式构造,相当于Person(40)

	// Person p1 = 40; // 直接用 40 构建一个p1对象

	// getchar();
	return 0;
}