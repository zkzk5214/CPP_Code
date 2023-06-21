#include <iostream>
using namespace std;

// Custom exception type 

// The bass class of all exceptions
class Exception {
public:
	virtual string what() const = 0;
};

class DivideException : public Exception {
public:
	string what() const {return "Can not divided by zero";}
};

int divide(int v1, int v2) throw(Exception){
	if (v2 == 0) {throw DivideException();}
	return v1 / v2;
}

int main() {
    try {
		int a = 10;
		int b = 0;
		cout << divide(a, b) << endl;
	} catch (const Exception &exception) {
		// Inherited superclass exceptions
		cout << exception.what() << endl;
	} catch (...) {
		// Intercepts all types of exceptions
		cout << "Exception Occurs" << endl;
	}

	// getchar();
	return 0;
}