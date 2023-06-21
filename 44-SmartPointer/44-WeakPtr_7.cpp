#include <iostream>
using namespace std;
/*
Weak Pointer
    weak_ptr makes a weak reference to an object
    weak_ptr can point to an object to solve the circular reference problem of shared_ptr
*/

class Person;
 
class Car {
public:
    weak_ptr<Person> m_person;
    // Car has a weak reference to Person, and when 
    //  Person is deallocated automatically, Car is 
    //  deallocated as well.
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
		person->m_car = car;
		car->m_person = person;
	}

	// getchar();
	return 0;
}