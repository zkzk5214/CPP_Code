#include <iostream>
using namespace std;
/*
1-Common types of errors during programming
    1.1-Syntax error
    1.2-Logic error
    1.3-Exceptions
    ...
2-Exceptions
    2.1-An exception is an error that can occur while a program is running(like OOM)
    2.2-The exception is not handled and causes the program to terminate.
    2.3-After an exception is thrown, the current function is searched for a matching
    catch, and if it cannot find one, the code of the current function is terminated 
    and look for outside function. If no match is found, the program terminates.
    2.4-Throw declarations for exceptions
        For the sake of readability and teamwork, it is recommended that the function
    declare an exception type if it may throw an exception inside of it.

    try {
        // Detected code
    } catch (Exception type[variable name]) {
        // Exception handling code
    } catch (Exception type[variable name]) {
        // Exception handling code
    } ...
*/

int divide(int v1, int v2){
        if (v2 == 0) throw "Can not divided by zero"; 
        return v1 / v2;
}

int main(){
    try {
        int a = 10, b = 0, c = divide(a,b);
    }    catch (const char *exception){
        cout << exception << endl;
    }
    cout << "runing..." << endl;

    // getchar();
    return 0;
}

// 2.4
// Throw any possible exceptions
// void func1 (){} 
// Don't throw any exceptions
// void func2() throw(){} 
// Only int and double exceptions are thrown
// void func3() throw(int, double){} 