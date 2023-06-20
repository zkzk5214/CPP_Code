#include <iostream>
using namespace std;
/*
Auto:
    1-Type Inference refers to automatic deduction of the 
data type of an expression in a programming language. 
Before C++ 11, each data type needed to be explicitly 
declared at compile-time, limiting the values of an 
expression at runtime but after the new version of C++, 
many keywords are included which allows a programmer to 
leave the type deduction to the compiler itself. 
    2-With type inference capabilities, we can spend less 
time having to write out things the compiler already knows. 
As all the types are deduced in the compiler phase only, 
the time for compilation increases slightly but it does 
not affect the run time of the program.
    3-Auto keyword: The auto keyword specifies that the 
type of the variable that is being declared will be 
automatically deducted from its initializer. In the case 
of functions, if their return type is auto then that will 
be evaluated by return type expression at runtime. Good 
use of auto is to avoid long initializations when creating 
iterators for containers.
Note: 
    The variable declared with auto keyword should be 
initialized at the time of its declaration only or else 
there will be a compile-time error. 
*/

int main()
{
	// auto a; this line will give error
	// because 'a' is not initialized at
	// the time of declaration
	// a=33;

	// see here x ,y,ptr are
	// initialised at the time of
	// declaration hence there is
	// no error in them
	auto x = 4;
	auto y = 3.37;
	auto z = 3.37f;
	auto c = 'a';
	auto ptr = &x;
	auto pptr = &ptr; //pointer to a pointer
	cout << typeid(x).name() << endl
		<< typeid(y).name() << endl
		<< typeid(z).name() << endl
		<< typeid(c).name() << endl
		<< typeid(ptr).name() << endl
		<< typeid(pptr).name() << endl;

	return 0;
}
/*
    Typeid is an operator which is used where the  
dynamic type of an object needs to be known. 
    typeid(x).name() returns the data type of x, 
    for example, 
    ‘i’ for integers | ‘d’ for doubles | ‘f’ for float
    ‘c’ for char | ‘Pi’ for the pointer to integer
    ‘Pd’ for the pointer to double | ‘Pf’ for the pointer to float 
    ‘Pc’ for the pointer to char
    ’PPi’ for the pointer to pointer to integer
    single Pointer results in prefix ‘P’
    double pointer results in prefix ‘PP’
But the actual name returned is mostly compiler dependent. 

Note: 
    Auto becomes int type if even an integer reference 
is assigned to it. To make it reference type, we use auto &. 
    Function that returns a ‘reference to int’ type : 
        int& fun() {};
    m will default to int type instead of int& type : 
        auto m = fun();
    n will be of int& type because of use of extra & with auto keyword : 
        auto& n = fun();
*/