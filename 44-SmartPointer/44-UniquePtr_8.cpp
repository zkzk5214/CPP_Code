#include <iostream>
using namespace std;
/*
Unique Pointer
	1-unique_ptr also creates a strong reference to an object. 
		and ensures that only one pointer points to the object 
		at a time.
	2-When unique_ptr is deallocated(the scope ends), the obejct 
		it points to is deallocated automatically.
	3-Ownership of unique_ptr can be transferred using the 
		std::move function.
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

    unique_ptr<Person> ptr2;
    {
		// ptr1 strong reference the Person
        unique_ptr<Person> ptr1(new Person());
		// After transfer, ptr2 strong reference the Person
        ptr2 = std::move(ptr1);
    }
	

	// getchar();
	return 0;
}