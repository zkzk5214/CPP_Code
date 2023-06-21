#include <iostream>
using namespace std;
/*
Smarter Pointer
	1-Problems with tranditional Pointers
		1.1-Requires manual memory management
		1.2-Prone to memory leaks(forgetting to 
			release, exception, etc.)
		1.3-Wild pointer after release.
	2-Smarter Pointer is meant to solve the problems 
		of Tranditional Pointer.
		2.1-auto_ptr: C++98, deprecated in C++11(has 
			flaws, e.g. does not work with arrays)
		2.2-shard_ptr: C++11
		2.3-unique_ptr:C++11
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

// Simple self-implementation of smart pointer
template <typename T>
class SmartPointer {
private:
	T *m_pointer;
public:
	SmartPointer(T *poiner) :m_pointer(poiner) {}

	~SmartPointer() {
		if (m_pointer == nullptr) return;
		delete m_pointer;
	}

	T *operator->() { // operator overload 
		return m_pointer;
	}
};


int main() {
	cout << 1 << endl;
    {
		// p is an object
        SmartPointer<Person> p(new Person(20)); 
        p->run();
    }
    cout << 2 << endl;

	// getchar();
	return 0;
}