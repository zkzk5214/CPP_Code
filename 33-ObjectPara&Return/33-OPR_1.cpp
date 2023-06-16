#include <iostream>
using namespace std;
/* 
Object type parameters and return values
	1-Using object types as function arguments or 
	return values may result in unnecessary
	intermediate objects. 
*/

class Car {
	int m_price;
public:
	Car() {
		cout << "Car() - " << this->m_price << endl;
	}
	Car(int price): m_price(price){}
	Car(const Car &car): m_price(car.m_price) {
		cout << "Car(const Car &) - " << this->m_price << endl;
	}
	// ~Car() {
	// 	cout << "~Car() - " << this << endl;
	// }
};

void test1(Car car) {}
// Can be done with a reference and only builds one object.
// void test1(Car &car) {} 


Car test2() {
	Car car(20); // Car(int price)
	return car;
}

int main() {
	Car car1(10); // Car(int price)
	test1(car1); // Car(const Car &car)

	Car car2= test2(); // Car(const Car &car)
	// The compiler optimizers so that there is only one copy construction.

	Car car3(30); // Car(int price)
	// Copy and construct a new car object from test2 and assign it to car3 
	// 		(the memory is in the stack space of the main function)
	car3 = test2(); // Car(const Car &car)

	// getchar();
	return 0;
}