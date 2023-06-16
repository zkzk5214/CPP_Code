// C++ program for the above approach
#include <iostream>
using namespace std;
/*
For const return type: 
    The return type of the function() is const and so 
        it returns a const integer value to us.
*/
const int foo(int y)
{
	y--;
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
