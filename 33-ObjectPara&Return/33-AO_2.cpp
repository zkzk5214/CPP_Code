#include <iostream>
using namespace std;
/* 
https://www.geeksforgeeks.org/anonymous-objects-in-cpp/
An Object is an instance of a Class. A class has no memory 
	allocated it is just like a blueprint, but when it is 
	instantiated (i.e. an object is created) memory is allocated 
	just like the real-world instance of that blueprint.

An object that does not have a reference variable is known 
	as an anonymous object. These are the type of objects 
	created for instance use only.

Properties of Anonymous Objects:
	We can create an object without a name. Such types of 
		nameless objects are called anonymous objects.
	The primary purpose of the anonymous object is just 
		for instant use (for one-time usage).
	An Anonymous object can be passed as an argument to a function.
	These are used to reduce memory consumption.

Syntax:
	Classname({parameters});
*/ 

class GFG {
	// Private datamembers
	int a, b;

public:
	// Constructor
	GFG() { cout << "Default Constructor Executed\n"; }

	GFG(int a1, int b1)
	{
		cout << "Parameterised Constructor Executed\n";
		a = a1;
		b = b1;
	}

	// Destructor
	~GFG() { cout << "Destructor Executed\n"; }
};

int main()
{
	// Creation of Anonymous Object
	GFG({ 2, 3 });

	// Creation of Anonymous Object
	GFG({ 4, 5 });
	return 0;
}
