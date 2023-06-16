#include <iostream>
using namespace std;
/*
Constant Variables:
    1-The const variable cannot be left un-initialized 
        at the time of the assignment.
    2-It cannot be assigned value anywhere in the program.
    3-Explicit value needed to be provided to the constant variable 
        at the time of declaration of the constant variable.
Conclusion(CM_1 ~ CM_4):
    // non-const value
    1. int value = 5;         
    // ptr_1 points to a “const int” value, so this is a pointer to a const value.
    2. const int *ptr_1 = &value;      
    // ptr_2 points to an “int”, so this is a const pointer to a non-const value.
    3. int *const ptr_2 = &value;        
    // ptr_3 points to a “const int” value, so this is a const pointer to a const value.
    4. const int *const ptr_3 = &value;   
*/


int main()
{
	// const int x; CTE error
	// x = 9; CTE error
	const int y = 10;
	cout << y;

	return 0;
}
