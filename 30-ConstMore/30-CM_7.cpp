#include <iostream>
using namespace std;
/*
A function() parameters and return type of function() can be declared as constant. 
Constant values cannot be changed as any such attempt will generate a compile-time error.
*/


// Function foo() with variable
// const int
void foo(const int y)
{
	// y = 6; const value
	// can't be change
	cout << y << endl;
}

// Function foo() with variable int
void foo1(int y)
{
	// Non-const value can be change
	y = 5;
	cout << y << endl;
}

// Driver Code
int main()
{
	int x = 9;
	const int z = 10;

	foo(z);
    foo1(x);

	return 0;
}
