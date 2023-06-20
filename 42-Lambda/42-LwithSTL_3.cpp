/*https://www.geeksforgeeks.org/lambda-expression-in-c/*/
#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;
/*
[ capture clause ] (parameters) -> return-type {definition of method} 
*/

// Function to print vector
void printVector(vector<int> v)
{
	// lambda expression to print vector
    /*
    for_each (InputIterator start_iter, InputIterator last_iter, Function fnc)
    */
	for_each(v.begin(), v.end(), 
        [](int i){std::cout << i << " ";}
    );
	cout << endl;
}

int main()
{
	vector<int> v {4, 1, 3, 5, 2, 3, 1, 7};
	// printVector(v);

    // 1)
	// below snippet find first number greater than 4
	// find_if searches for an element for which
	// function(third argument) returns true
    // Iterators are used to point at the memory addresses of STL containers. 
    // Declaring iterator to a vector
	vector<int>::iterator p = find_if(v.begin(), v.end(), 
        [](int i){return i > 4;}
        );
	// cout << "First number greater than 4 is : " << *p << endl;

    // 2)
	// function to sort vector, lambda expression is for sorting in
	// non-increasing order Compiler can make out return type as
	// bool, but shown here just for explanation
	sort(v.begin(), v.end(), 
        [](const int& a, const int& b) -> bool{return a > b;}
        );
	// printVector(v);

    // 3)
	// function to count numbers greater than or equal to 5
	int count_5 = count_if(v.begin(), v.end(), 
        [](int a){return (a >= 5);}
        );
	// cout << "The number of elements greater than or equal to 5 is : "
	// 	<< count_5 << endl;

    // 4)
	// function for removing duplicate element (after sorting all
	// duplicate comes together)
	p = unique(v.begin(), v.end(), 
        [](int a, int b){return a == b;}
        );
    // Now v becomes {7 5 4 3 2 1 * *}
    // * means undefined

    // 5)
	// resizing vector to make size equal to total different number
	v.resize(distance(v.begin(), p));
	// printVector(v);

    // 6)
	// accumulate function accumulate the container on the basis of
	// function provided as third argument
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // accumulate(first, last, sum, myfun); 
    // sum: initial value of the sum
	int f = accumulate(arr, arr + 10, 1, 
        [](int i, int j){return i * j;});
	// cout << "Factorial of 10 is : " << f << endl;

    // 7)
	// access function by storing this into variable
	auto square = [](int i){return i * i;};
	// cout << "Square of 5 is : " << square(5) << endl;
}
/*
    A lambda expression can have more power than an ordinary 
function by having access to variables from the enclosing
scope. We can capture external variables from the enclosing 
scope in three ways : 
    Capture by reference 
    Capture by value 
    Capture by both (mixed capture)
Syntax used for capturing variables : 
    [&] : capture all external variables by reference 
    [=] : capture all external variables by value 
    [a, &b] : capture a by value and b by reference
*/