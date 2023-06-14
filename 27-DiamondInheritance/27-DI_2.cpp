#include <iostream>
using namespace std;

/*
    1-Virtual Inheritance solve the problem of diamond inheriance.
    2-When we use ‘virtual’ keyword, the default constructor of grandparent 
        class is called by default even if the parent classes explicitly 
        call parameterized constructor. 
    3-Class Person is called Virtual Base Class.
    Virtual Pointer (VPTR), Virtual Table (VTABLE)
*/

class Person {
public:
	Person(int x) {
        cout << "Person::Person(int ) called" << endl; 
    }
	Person(){
        cout << "Person::Person() called" << endl; 
    }
};

class Faculty : virtual public Person {
public:
	Faculty(int x):Person(x) {
	    cout<<"Faculty::Faculty(int ) called"<< endl;
	}
};

class Student : virtual public Person {
public:
	Student(int x):Person(x) {
		cout<<"Student::Student(int ) called"<< endl;
	}
};

class TA : public Faculty, public Student {
public:
	TA(int x):Student(x), Faculty(x), Person(x) {
		cout<<"TA::TA(int ) called"<< endl;
	}
};

int main() {
	TA ta1(30);
}
