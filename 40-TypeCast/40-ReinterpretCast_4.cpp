#include <iostream>
using namespace std;
/*
https://www.geeksforgeeks.org/casting-operators-in-cpp/
2.3 Reinterpret_cast
    2.3.1-The reinterpret_cast operator is used to 
        convert the pointer to any other type of 
        pointer. It does not perform any check whether 
        the pointer converted is of the same type or not.
    Syntax of reinterpret_cast
        reinterpret_cast <new_type> (expression);
*/

int main(){
    int a = 10;
	double d = reinterpret_cast<double &>(a);
	// cout << "a = " << a << endl;
	// cout << "d = " << d << endl;
	int *p = reinterpret_cast<int *>(0x100);
    // cout << "p = " << p << endl;

    int number = 10;
    // Store the address of number in numberPointer
    int* numberPointer = &number;
  
    // Reinterpreting the pointer as a char pointer
    char* charPointer
        = reinterpret_cast<char*>(numberPointer);
  
    // Printing the memory addresses and values
    cout << "Integer Address: " << numberPointer << endl;
    cout << "Char Address: "
         << reinterpret_cast<void*>(charPointer) << endl;

    // getchar();
    return 0;
}
/*
    In the above example, we have defined an int variable 
‘number’ and then store the address of ‘number’ in ‘numberPointer’ 
of the int type after that we have converted the ‘numberPointer’ 
of the int type into char pointer and then store it into 
‘charPointer’ variable. To verify that we have printed the 
address of both numberPointer and charPointer. 
    To print the address stored in ‘charPointer’ reinterpret_cast<void*> 
is used to bypass the type-checking mechanism of C++ and 
allow the pointer to be printed as a generic memory address 
without any type-specific interpretation.

Note: 
    const_cast and reinterpret_cast are generally not 
reccommended as they vulnerable to different kinds of 
errors.
*/