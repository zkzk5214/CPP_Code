#include <iostream>
using namespace std;

/*
Pointers can be declared with a const keyword. 
When the pointer variable point to a const value:
    Syntax: 
        const data_type* var_name;
*/

int main()
{
	int x{ 10 };
	char y{ 'M' };

	const int* i = &x;
	const char* j = &y;

	// Value of x and y can be altered,
	// they are not constant variables
	x = 9;
	y = 'A';

	// Change of constant values because,
	// i and j are pointing to const-int
	// & const-char type value
    // Read-only variable is not assignable
	// *i = 6; 
	// *j = 7;

	cout << *i << " " << *j << endl;
}
/*
Explanation: 
    Here in the above case, i and j are two pointer variables that 
    are pointing to a memory location const int-type and char-type, 
    but the value stored at these corresponding locations can be changed 
    as we have done above. 
*/