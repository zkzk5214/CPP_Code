#include <iostream>
using namespace std;

// 对象类型参数和返回值
// 1-使用对象类型作为函数的参数或者返回值,可能会产生一些不必要的中间对象

class Car {
public:
	Car() {
		cout << "Car() - " << this << endl;
	}

	Car(const Car &car) {
		cout << "Car(const Car &) - " << this << endl;
	}

	// ~Car() {
	// 	cout << "~Car() - " << this << endl;
	// }

	void run() {
		cout << "run()" << endl;
	}
};

// void test1(Car car) {}
void test1(Car &car) {} // 用引用也可以实现,并且只构建一个对象


Car test2() {
	Car car; // Car()
	return car;
}

int main() {

	// Car car1; // Car()
	// test1(car1); // 1

	// Car car2; // Car()
	// car2 = test2(); // 将test2函数里面产生的car对象,拷贝构造出一个新的car对象赋值给car2(内存在main函数的栈空间)

	Car car3 = test2(); // 编译器做了优化,只有一次拷贝构造

	// getchar();
	return 0;
}