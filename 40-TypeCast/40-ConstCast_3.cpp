#include <iostream>
using namespace std;
/*
https://www.geeksforgeeks.org/casting-operators-in-cpp/
2.3 Const_cast
    2.3.1-The const_cast operator is used to modify 
        the const or volatile qualifier of a variable. 
        It allows programmers to temporarily remove 
        the constancy of an object and make modifications. 
    2.3.2-Caution must be exercised when using const_cast, 
        as modifying a const object can lead to undefined 
        behavior.
    Syntax for const_cast
        const_cast <new_type> (expression);
*/


int main(){
	const int number = 5;
	// Pointer to a const int
	const int* ptr = &number;

	// int* nonConstPtr = ptr; if we use this
	// instead of without using const_cast
	// we will get error of invalid conversion
	int* nonConstPtr = const_cast<int*>(ptr);
	*nonConstPtr = 10;

	cout << "Modified number: " << *nonConstPtr;

	return 0;
}
