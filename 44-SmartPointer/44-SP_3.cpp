#include <iostream>
using namespace std;

class Person;
 
class Car {
public:
	// shared_ptr<Person> m_person;
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

	{
		shared_ptr<Person> person(new Person());
		shared_ptr<Car> car(new Car());

        // shared_ptr 的循环引用
        // 内存泄露,堆空间 Person 对象和 Car 对象互相指向,不能销毁
        // weak_ptr 会对一个对象产生弱引用
        // weak_ptr 可以指向对象解决 shared_ptr 的循环引用问题
        // Car 对象 对 Person 对象弱引用,Person对象会自动销毁(析构),随后Car对象也销毁
		person->m_car = car;
		car->m_person = person;
	}

	// getchar();
	return 0;
}