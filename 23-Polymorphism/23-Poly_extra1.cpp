// C++ program to illustrate
// concept of Virtual Functions
// https://www.geeksforgeeks.org/virtual-function-cpp/

#include <iostream>
using namespace std;

class base {
public:
	virtual void print() { cout << "print base class\n"; }
	void show() { cout << "show base class\n"; }
};

class derived : public base {
public:
	void print() { cout << "print derived class\n"; }
	void show() { cout << "show derived class\n"; }
};

int main()
{
	base* bptr;
	derived d;
	bptr = &d;
	// Virtual function, binded at runtime
	bptr->print();
	// Non-virtual function, binded at compile time
	bptr->show();

	return 0;
}
/*
Explanation: 
Runtime polymorphism is achieved only through a pointer (or reference) of the base class type. 
Also, a base class pointer can point to the objects of the base class as well as to the objects 
of the derived class. In the above code, the base class pointer ‘bptr’ contains the address of 
object ‘d’ of the derived class.
Late binding (Runtime) is done in accordance with the content of the pointer (i.e. location 
pointed to by pointer) and Early binding (Compile-time) is done according to the type of pointer 
since the print() function is declared with the virtual keyword so it will be bound at runtime 
(output is print derived class as the pointer is pointing to object of derived class) and show() 
is non-virtual so it will be bound during compile time (output is show base class as the pointer 
is of base type).
*/