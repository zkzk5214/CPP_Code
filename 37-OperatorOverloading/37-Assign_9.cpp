#include <iostream>
using namespace std;
/*Assigning operator*/

class Person {
private:
	int m_age;
	int m_height;
	// When this is private, it cannot be assigned outside.
	// void operator=(const Person &person) {}

public:
	Person(int age = 0, int height = 0) :m_age(age), m_height(height) {}
	Person &operator=(const Person &person) {
		// set the m_age, leave the m_height
		m_age = person.m_age;
		return *this;
	}
	void display() {
		cout << m_age << ", " << m_height << endl;
	}
};

int main() {
	Person p1(10, 180);
	Person p2(11, 175);
    
    p1 = p2;
	p1.display();

    (p1=p2)=Person(50,20); 
    p1.display();
	
	// getchar();
	return 0;
}
