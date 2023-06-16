#include <iostream>
using namespace std;

/*
The default copy provided by compiler is a shallow copy.
Shallow copy: pointer type variable copies only the address.
Deep copy: copies the pointer to a new storage space.
*/

class Car {
	int m_price;
	char *m_name; // character string

public:
	/* It is not safe for a pointer to point from Heap to Stack, 
		once the Stack is reclaimed, the char pointer m_name 
		becomes a wild pointer. */
	Car(int price = 0, char *name = NULL) :m_price(price), m_name(name) { 
		cout << "price is " << m_price << ", name is " << m_name << endl;
	}

	void display() {
		cout << "price is " << m_price << ", name is " << m_name << endl;
	}
};


int main() {
	// The number of bytes stored in c string is one more than the length 
	// 		of the string you type.
	const char *name1 = "BMW"; 
	char name2[] = {'B', 'M', 'W', '\0'}; // print up to '\0'
	// cout << name2 << endl;
	// cout << strlen(name2) << endl; // char '\0' is not counted as a length.
	Car car(100, name2);

	char name3[] = {'A','u','d','i','\0'}; 
	Car *car1 = new Car(200, name3); 
	// pointer car in Stack, new Car in Heap, *m_name in new Car from Heap point to Heap.

	Car car2(car);

	// getchar();
	return 0;
}