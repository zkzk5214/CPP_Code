#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
NULL: 
    1-NULL is typically defined as (void *)0 and 
conversion of NULL to integral types is allowed. 
So the function call fun(NULL) becomes ambiguous. 
Nullptr:
    2-If we replace NULL with nullptr, we get the 
output as “fun(char *)”. nullptr is a keyword 
that can be used at all places where NULL is 
expected. 
    3-Like NULL, nullptr is implicitly convertible 
and comparable to any pointer type. 
    4-Unlike NULL, it is not implicitly convertible 
or comparable to integral types.
*/

// function with integer argument
void fun(int N) { cout << "fun(int)" << endl; return;}

// Overloaded function with char pointer argument
void fun(char* s) { cout << "fun(char *)" << endl; return;}

int main()
{
	// Ideally, it should have called fun(char *),
	// but it causes compiler error.
	// fun(NULL);
    fun(nullptr);

    int *ptr = nullptr;
    // Below line compiles
    if (ptr) { cout << "true" << endl; }   
    else { cout << "false" << endl; }   

    // creating a variable of nullptr_t type
    // i.e., with value equal to nullptr
    nullptr_t np1;
    
    // Initialize a pointer with value equal to np1
    char *x = np1;  // same as x = nullptr (or x = NULL
                    // will also work)
    if (x == nullptr)
        cout << "x is null" << endl;
    else
        cout << "x is not null" << endl;
        
    return 0;
}
 
