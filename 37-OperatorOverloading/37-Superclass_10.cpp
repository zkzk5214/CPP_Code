#include <iostream>
using namespace std;
// Call the operator overload function of the superclass.
class Person {
	int m_age;
public:
	Person &operator=(const Person &person) {
        // Overload the assignment operator 
		this->m_age = person.m_age;
	}
};

class Student : public Person {
	int m_score;
public:
	Student &operator=(const Student &student) { 
		// Returns a reference so that the return value can be assigned again
        // Overload the assignment operator
		Person::operator=(student);
		this->m_score = student.m_score;
	}
};

int main() {
	Student stu1;
	Student stu2;

	stu2 = stu1;

	// getchar();
	return 0;
}