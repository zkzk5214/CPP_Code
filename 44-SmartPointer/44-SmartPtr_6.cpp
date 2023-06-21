#include <iostream>
using namespace std;
/*
shared_ptr circular reference:
    Memory leak, Person and Car in heap point 
        to each other, cannot be  destroyed.
*/

class Person;
 
class Car {
public:
	shared_ptr<Person> m_person = nullptr;
	Car() {
		cout << "Car()" << endl;
	} 
	~Car() {
		cout << "~Car()" << endl;
	}
};

class Person {
public:
	shared_ptr<Car> m_car = nullptr; 
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
		person->m_car = car;
		car->m_person = person;
	}

	// getchar();
	return 0;
}