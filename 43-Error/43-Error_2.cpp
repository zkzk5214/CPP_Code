#include <iostream>
using namespace std;

// 自定义异常类型

// 所有异常的基类
class Exception {
public:
	virtual const char *what() const = 0;
	virtual int code() const = 0;
};

class DivideException : public Exception {
public:
	const char *what() const {
		return "不能除以0";
	}

	int code() const {
		return 202;
	}
};

class AddException : public Exception {
public:
	const char *what() const {
		return "加法有问题";
	}

	int code() const {
		return 201;
	}
};

int divide(int v1, int v2) {
	if (v2 == 0) {
		throw DivideException(); // 抛出异常
	}
	return v1 / v2;
}

void test4() {
	cout << 1 << endl;

	// try {
	// 	int a = 10;
	// 	int b = 0;
	// 	cout << divide(a, b) << endl;
	// } catch (const DivideException &exception) {
	// 	cout << "产生异常了(DivideException):" << exception.what() << endl;
	// } catch (const AddException &exception) {
	// 	cout << "产生异常了(AddException)" << endl;
	// }

    try {
		int a = 10;
		int b = 0;
		cout << divide(a, b) << endl;
	} catch (const Exception &exception) { // 子类继承父类的异常
		cout << "产生异常了：" << exception.what() << endl;
	}

	cout << 2 << endl;
}

int main() {

    test4();
	// getchar();
	return 0;
}