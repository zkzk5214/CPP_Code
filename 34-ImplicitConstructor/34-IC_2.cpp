#include <iostream>
using namespace std;
/* 
Implicit Constructor
2-We can avoid such implicit conversions as these may lead to unexpected results. 
	We can make the constructor explicit with the help of an "explicit" keyword. 
*/

class Person {
	int m_age;
public:
	Person() {
		cout << "Person() - " << this << endl;
	}
	explicit Person(int age) :m_age(age) { // 2
		cout << "Person(int) - " << this << endl;
	}
	Person(const Person &person) :m_age(person.m_age) {
		cout << "Person(const Person &person) - " << this << endl;
	}
	~Person() {
		cout << "~Person() - " << this << endl;
	}
	void display() {
		cout << "display() - age is " << m_age << endl;
	}
};

void test1(Person person) {}


int main() {
	// Person p1 = 20; // Person(int age) Directly build p1 with int 20.

	// Person p2;
	// p2 = 40; 
	
    // test1(30); // Person(int age)

	// getchar();
	return 0;
}