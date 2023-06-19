#include <iostream>
using namespace std;
/*
1-Functors:
	Using an object as if it were a function.
	In contrast to regular functions, they act as objects that can hold state.(member variables)
2-Almost all operators can be overloaded except a few. 
	Following is the list of operators that cannot be overloaded:
	sizeof
	typeid
	Scope resolution (::)
	Class member access operators (.(dot), .* (pointer to member operator))
	Ternary or conditional (?:)
3-Some opeartors can only be overloaded as member functions
    Assignment: =
    Subscript: []
    Function call : ()
    De-referencing: (->)
*/

//int sum(int a, int b) {
//	return a + b;
//}
class Sum {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};

int main() {
	Sum sum;
	cout << sum(10, 20) << endl;
	// cout << sum.operator()(10, 20) << endl;

	// getchar();
	return 0;
}
