#include <iostream>
using namespace std;
/*
Smarter Pointer
2.1-auto_ptr: C++98, deprecated in C++11(has flaws, e.g. does not 
work with arrays)
    2.1.1-When an object is stored in heap, must new an object, 
        and delete is a concern if tranditional pointer is used  
    2.1.2-The smart pointer p points to the Person object in heap.
    2.1.3-The lifetime of the smart pointer follows the object, 
        and when the object is destroyed(after leaving {}),the smart
        pointer is destroyed
    2.1.4-Smart pointer object is not recommended to point to stack.
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

void test() {
	cout << "Start" << endl;
	{
		auto_ptr<Person> p(new Person(20)); // c++98
		p->run();
	}
	cout << "Finish" << endl;
}

int main() {
    test();

	// getchar();
	return 0;
}