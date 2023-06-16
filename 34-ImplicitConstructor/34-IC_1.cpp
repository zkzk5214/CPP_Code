#include <iostream>
using namespace std;
/* 
Implicit Constructor
	1-In some situations, we can call a single-argument constructor implicitly 
		(it's okay to have multiple arguments except for the first
		argument with a default value) 
*/

class Car {
	int m_price;
public:
	Car() {
		cout << "Car() - " << this << endl;
	}
	Car(int price): m_price(price) { // Implicit Constructor
		cout << "Car(int) - " << this << endl;
	}
	Car(const Car &car): m_price(car.m_price)  {
		cout << "Car(const Car &car) - " << this << endl;
	}
	~Car() {
		cout << "~Car() - " << this << endl;
	}
	void display() {
		cout << "display() - age is " << this->m_price << endl;
	}
};

void test1(Car person) {}

Car test2() {
	return 40;
}

int main() {
	Car car1 = 10; 	// Car(int price) Directly build car1 with int 10.

	Car car2(20); 	// Car(int price)
	car2 = 30; 		// Car(int price): Anonymous object

    test1(40); 		// Car(int price)

	Car car3 = test2(); // Car(int price): Pass 40 to one-argument constructor in car3 

	Car car4;
	// Call the no-argument constructor to create car4, and then use 40 to construct a temporary
	// car object, produce an implicit constructor, equivalent to Car(40).
	car4 = 40;

	// getchar();
	return 0;
}