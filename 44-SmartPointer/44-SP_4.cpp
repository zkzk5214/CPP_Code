#include <iostream>
using namespace std;
/*
unique_ptr
1-unique_ptr也会对一个对象产生强引用，它可以确保同一时间只有1个指针指向对象 
2-当unique_ptr销毁时(作用域结束时)，其指向的对象也就自动销毁了
3-可以使用std::move函数转移unique_ptr的所有权

*/
class Person;
 
class Car {
public:
    weak_ptr<Person> m_person;
	Car() {
		cout << "Car()" << endl;
	} 
	~Car() {
		cout << "~Car()" << endl;
	}
};

class Person {
public:
	shared_ptr<Car> m_car; 
	Person() {
		cout << "Person()" << endl;
	}
	~Person() {
		cout << "~Person()" << endl;
	}
};

int main() {

    unique_ptr<Person> p0;
    {
        unique_ptr<Person> p1(new Person());
        p0 = std::move(p1); // 3
    }
	

	// getchar();
	return 0;
}