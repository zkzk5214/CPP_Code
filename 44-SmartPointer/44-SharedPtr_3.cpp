#include <iostream>
using namespace std;
/*
Shared_Pointer
    1-Design philosophy of shared_ptr
        1.1-Multiple shared_ptr can point to the same object, 
        and the object will be automatically deallocated when 
        the last shared_ptr ends in scope.
        1.2-A new smart pointer can be initialized from an 
        existing one.

*/ 

class Person {
	int m_age;
public:
	Person() {
		cout << "Person()" << endl;
	}
	Person(int age) :m_age(age) {
		cout << "Person(int)" << endl;
	}
	~Person() {
		cout << "~Person()" << endl;
	}
	void run() {
		cout << "run() - " << m_age << endl;
	}
};

int main() {
    cout << "Start" << endl;
	{
        shared_ptr<Person> p3;
        {
            // 1.2
            shared_ptr<Person> p1(new Person(10));
            shared_ptr<Person> p2(p1);
            p3 = p2;

			// For Array
			shared_ptr<Person> ptr1(new Person[5]{}, [](Person *p){delete[] p;});
        }
		cout << 1 << endl;
	}
    cout << "Finish" << endl;

	// getchar();
	return 0;
}