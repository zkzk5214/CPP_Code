#include <iostream>
using namespace std;
/*
There is no substantial issue to pass const or non-const 
    variable to the function because the value that will 
    be returned by the function will be constant automatically. 
    As the argument of the function is non-const.
For const return type and const parameter: 
    Both return type and parameter of the function are of 
    const types. 
*/
const int foo(const int y)
{
	// y = 9; it'll give CTE error as
	// y is const var its value can't
	// be change
	return y;
}

int main()
{
	int x = 9;
	const int z = 10;
	cout << foo(x) << '\n'
		<< foo(z);

	return 0;
}

/*
Explanation: 
    Here, both const and non-const values can be passed as 
    the const parameter to the function, but we are not 
    allowed to then change the value of a passed variable 
    because the parameter is const. Otherwise, we’ll face 
    the error as below: 
    // y=9; it’ll give the compile-time error as y is const 
    var its value can’t be changed.
*/