#include <iostream>
using namespace std;
/*
https://www.geeksforgeeks.org/anonymous-objects-in-cpp/
Calling Member Functions with the Help of an Anonymous Object
    Calling member functions with the help to call the function, 
        we require an object, but after implementing the function, 
        we are not using that object anymore. Hence for this one-time 
        requirement anonymous object is the best choice. It saves 
        time for creating objects and also saves memory.
    Syntax:
        Classname({parameters}). function name({parameters});
*/
class GFG {
	// Private datamembers
	int a, b;

public:
	// Default constructor
	GFG() {}

	// Parameterised Constructor
	GFG(int a1, int b1)
	{
		cout << "Constructor Executed\n";
		a = a1;
		b = b1;
	}

	// Member function
	void display()
	{
		cout << a << "\t" << b;
		cout << endl;
	}

	~GFG() { cout << "Destructor Executed\n"; }
};

// Driver Function
int main()
{
	// Invoking Member functions
	// with the help of
	// Anonymous Object
	GFG({ 2, 3 }).display();
	GFG({ 4, 5 }).display();
	return 0;
}
