#include <iostream>
using namespace std;
/*
Pass const-argument value to a non-const parameter of a function cause error: 
Passing const argument value to a non-const parameter of a function isn’t valid 
it gives you a compile-time error.
*/

int foo(int* y)
{
	return *y;
}

int main()
{
	int z = 8;
	const int* x = &z;
	// cout << foo(x);
	return 0;
}
