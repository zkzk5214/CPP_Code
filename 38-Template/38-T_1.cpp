#include <iostream>
using namespace std;
/*
1-Generics is the idea to allow type (Integer, String, … etc 
    and user-defined types) to be a parameter to methods, classes 
    and interfaces. 
2-The method of Generic Programming is implemented to increase the 
    efficiency of the code. Generic Programming enables the programmer 
    to write a general algorithm which will work with all data types. 
    It eliminates the need to create different algorithms if the data 
    type is an integer, string or a character.
3-The advantages of Generic Programming are
    Code Reusability
    Avoid Function Overloading
    Once written it can be used for multiple times and cases.
4-Generics can be implemented in C++ using Templates. Template is a 
    simple and yet very powerful tool in C++. The simple idea is to pass 
    data type as a parameter so that we don’t need to write the same code 
    for different data types. 
*/

// Generic Functions using Template:
//  One function works for all data types.
//  This would work even for user defined types
//  if operator '>' is overloaded
template <typename T>
T myMax(T x, T y){
	return (x > y) ? x : y;
}

int main(){
	// Call myMax for int
	cout << myMax<int>(3, 7) << endl;

	// call myMax for double
	cout << myMax<double>(3.0, 7.0) << endl;

	// call myMax for char
	cout << myMax<char>('g', 'e') << endl;

	return 0;
}
