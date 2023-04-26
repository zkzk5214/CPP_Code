#include <iostream>
using namespace std;
/*
1-传统指针存在的问题
1.1-需要手动管理内存 
1.2-容易发生内存泄露(忘记释放、出现异常等) 
1.3-释放之后产生野指针
2-智能指针就是为了解决传统指针存在的问题 
2.1-auto_ptr:属于C++98标准，在C++11中已经不推荐使用(有缺陷，比如不能用于数组) 
2.2-shared_ptr:属于C++11标准
2.3-unique_ptr:属于C++11标准
*/

class Person {
	int m_age;
public:
	Person() {
		cout << "Person()" << endl;
	}
	Person(int age) :m_age(age) {
		cout << "Person(int)" << endl;
	}
	~Person() {
		cout << "~Person()" << endl;
	}
	void run() {
		cout << "run() - " << m_age << endl;
	}
};

void test() {
	// Person *p = new Person(20);
	// p->run(); // 1

	
	cout << 1 << endl;
	{
        // 当对象内存在堆空间时,必须new一个对象,如果使用传统指针则需要考虑delete问题
        // 智能指针p指向了堆空间的Person对象
        // 智能指针的生命周期跟随对象,对象销毁(离开{}后),智能指针也销毁
        // 智能指针的对象不建议指向栈空间
		auto_ptr<Person> p(new Person(20)); // c++98
		p->run();
        // Person p(20);
	    // p.run();
	}
	cout << 2 << endl;
}

template <typename T>
class SmartPointer {
private:
	T *m_obj;
public:
	SmartPointer(T *obj) :m_obj(obj) {}
	~SmartPointer() {
		if (m_obj == nullptr) return;
		delete m_obj;
	}

	T *operator->() { // 运算符重载
		return m_obj;
	}
};


int main() {

    // test();

	cout << 1 << endl;
    {
        SmartPointer<Person> p(new Person(20)); // p是个对象
        p->run();
    }
    cout << 2 << endl;

	// getchar();
	return 0;
}