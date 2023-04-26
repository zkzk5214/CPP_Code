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

// class Person {
// 	int m_age;
// public:
// 	Person() {
// 		cout << "Person()" << endl;
// 	}
// 	Person(int age) :m_age(age) {
// 		cout << "Person(int)" << endl;
// 	}
// 	~Person() {
// 		cout << "~Person()" << endl;
// 	}
// 	void run() {
// 		cout << "run() - " << m_age << endl;
// 	}
// };

// template <typename T>
// class SmartPointer {
// private:
// 	T *m_obj;
// public:
// 	SmartPointer(T *obj) :m_obj(obj) {}
// 	~SmartPointer() {
// 		if (m_obj == nullptr) return;
// 		delete m_obj;
// 	}

// 	T *operator->() { // 运算符重载
// 		return m_obj;
// 	}
// };

// void test() {
// 	cout << 1 << endl;
// 	{
// 		auto_ptr<Person> p(new Person(20)); // c++98
// 		p->run();
// 	}
// 	cout << 2 << endl;
// }

//void test2() {
//	cout << 1 << endl;
//	{
//		SmartPointer<Person> p(new Person(20));
//		p->run();
//	}
//	cout << 2 << endl;
//}
//
//void test3() {
//	{
//		shared_ptr<Person> p4;
//		{
//			shared_ptr<Person> p1(new Person(10));
//			cout << p1.use_count() << endl; // 1
//
//			shared_ptr<Person> p3;
//			{
//				shared_ptr<Person> p2 = p1;
//				cout << p2.use_count() << endl; // 2
//
//				p3 = p2; // 3
//			} // 2
//			cout << p3.use_count() << endl; // 2
//
//			p4 = p3;
//			cout << p4.use_count() << endl; // 3
//		} // 1
//
//		cout << p4.use_count() << endl; // 1
//	}
//}

// class Person;

// class Car {
// public:
// 	weak_ptr<Person> m_person;
// 	Car() {
// 		cout << "Car()" << endl;
// 	}
// 	~Car() {
// 		cout << "~Car()" << endl;
// 	}
// };

// class Person {
// public:
// 	shared_ptr<Car> m_car; 
// 	Person() {
// 		cout << "Person()" << endl;
// 	}
// 	~Person() {
// 		cout << "~Person()" << endl;
// 	}
// };

// int main() {
//     cout << 1 << endl;
//     {
//         SmartPointer<Person> p(new Person(20)); // p是个对象
//         p->run();
//     }
//     cout << 2 << endl;

// 	/*{
// 		shared_ptr<Person> person(new Person());
// 		shared_ptr<Car> car(new Car());

// 		person->m_car = car;
// 		car->m_person = person;
// 	}
// */

// 	// unique_ptr<Person> p0;
// 	// {
// 	// 	unique_ptr<Person> p1(new Person());
// 	// 	p0 = std::move(p1);
// 	// }

// 	// getchar();
// 	return 0;
// }