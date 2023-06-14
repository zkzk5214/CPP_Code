// C++ program to illustrate
// working of Virtual Functions
#include <iostream>
using namespace std;

class base {
public:
	void fun_1() { cout << "base-1\n"; }
	virtual void fun_2() { cout << "base-2\n"; }
	virtual void fun_3() { cout << "base-3\n"; }
	virtual void fun_4() { cout << "base-4\n"; }
};

class derived : public base {
public:
	void fun_1() { cout << "derived-1\n"; }
	void fun_2() { cout << "derived-2\n"; }
	void fun_4(int x) { cout << "derived-4\n"; }
};

int main()
{
	base* p;
	derived obj1;
	p = &obj1;

	// Early binding because fun1() is non-virtual
	// in base
	p->fun_1();

	// Late binding (RTP)
	p->fun_2();

	// Late binding (RTP)
	p->fun_3();

	// Late binding (RTP)
	p->fun_4();

	// Early binding but this function call is
	// illegal (produces error) because pointer
	// is of base type and function is of
	// derived class
	// p->fun_4(5);

	return 0;
}
/*
Explanation: 
Initially, we create a pointer of the type base class and initialize it with the address of 
the derived class object. When we create an object of the derived class, the compiler creates 
a pointer as a data member of the class containing the address of VTABLE of the derived class.
A similar concept of Late and Early Binding is used as in the above example. For the fun_1() 
function call, the base class version of the function is called, fun_2() is overridden in the 
derived class so the derived class version is called, fun_3() is not overridden in the derived 
class and is a virtual function so the base class version is called, similarly fun_4() is not 
overridden so base class version is called.
Note: 
fun_4(int) in the derived class is different from the virtual function fun_4() in the base class 
as prototypes of both functions are different.
*/
