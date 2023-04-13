#include <iostream>
using namespace std;

/*
编译器默认的提供的拷贝是浅拷贝
浅拷贝（shallow copy）：指针类型的变量只会拷贝地址值
深拷贝（deep copy）：将指针指向的内容拷贝到新的存储空间
*/

class Car {
	int m_price;
	char *m_name; // 字符串

public:
	// 堆空间指向栈空间不安全,一旦栈空间被回收 字符串指针 m_name 成为野指针
	// Car(int price = 0, const char *name = NULL) :m_price(price), m_name(name) { 
	// 	cout << "price is " << m_price << ", name is " << m_name << endl;
	// }

	void display() {
		cout << "price is " << m_price << ", name is " << m_name << endl;
	}
};


int main() {

	const char *name = "bmw"; // 存储c语言字符串的字节数会比字符串的长度多1

	char name2[] = {'b', 'm', 'w', '\0'}; // 打印截止至 '\0'

	// Car *car = new Car(100, name2); // new 对象放在在栈空间

	cout << name2 << endl;
	cout << strlen(name) << endl; // 字符串的 '\0' 不会算入长度

	// getchar();
	return 0;
}